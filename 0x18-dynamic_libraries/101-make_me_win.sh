#!/bin/bash
wget -o- ://github.com/angelofgrace/holbertonschool-low_level_programming/blob/2d07ccc642a88c6579199bd72a3c09f64ec21e5e/0x18-dynamic_libraries/printwin.so 
LD_PRELOAD=./printwin.so
