#!/bin/sh

# cleanup
rm -rf obj_dir
rm -f counter.vcd

# run verilator translation
verilator -Wall --cc --trace counter.sv --exe counter_tb.cpp

# build verilator translation
make -j -C obj_dir/ -f Vcounter.mk Vcounter

# run executable
obj_dir/Vcounter