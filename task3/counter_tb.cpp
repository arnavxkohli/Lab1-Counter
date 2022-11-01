#include "Vcounter.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int clk;

    Verilated::commandArgs(argc, argv);
    
    // initiate top-level design
    Vcounter* top = new Vcounter;

    // initiate trace
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("counter.vcd");

    // initiate vbuddy
    if (vbdOpen() != true) return(-1);
    vbdHeader("Lab 1: Counter");
    
    // initiate simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = vbdFlag();

    vbdSetMode(1);
    
    // run simulation
    for (i = 0; i < 500; i++) {
        // dump data & toggle clock
        for (clk = 0; clk < 2; clk++) {
            tfp->dump(2*i+clk);
            top->clk = !top->clk;
            top->eval();
        }

        vbdHex(4, (int(top->count) >> 16) & 0xF);
        vbdHex(3, (int(top->count) >> 8) & 0xF);
        vbdHex(2, (int(top->count) >> 4) & 0xF);
        vbdHex(1, int(top->count) & 0xF);
        vbdCycle(i++);

        // step 1 : this part defines the parameter value
        top->par = vbdValue();

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