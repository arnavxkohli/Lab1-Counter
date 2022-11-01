#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    
    // initiate top-level design
    Vtop* top = new Vtop;

    // initiate trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top.vcd");

    // initiate vbuddy
    if (vbdOpen() != true) return(-1);
    vbdHeader("Lab 1: Counter");
    
    // initiate simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    vbdSetMode(0);
    
    // run simulation
    for (i = 0; i < 500; i++) {
        // dump data & toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(4, (int(top->bcd) >> 16) & 0xF);
        vbdHex(3, (int(top->bcd) >> 8) & 0xF);
        vbdHex(2, (int(top->bcd) >> 4) & 0xF);
        vbdHex(1, int(top->bcd) & 0xF);
        vbdCycle(i++);

        //vbdPlot(int(top->count), 0, 255);

        // test pattern
        top->rst = false;
        top->en = vbdFlag();
        if (Verilated::gotFinish()) exit(0);
    }

    // house keeping
    vbdClose();
    tfp->close();
    exit(0);
}