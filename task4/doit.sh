#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f top.vcd

# run verilator translation
verilator -Wall --cc --trace top.sv bin2bcd.sv counter.sv --exe top_tb.cpp

# build verilator translation
make -j -C obj_dir/ -f Vtop.mk Vtop

# run executable
obj_dir/Vtop
