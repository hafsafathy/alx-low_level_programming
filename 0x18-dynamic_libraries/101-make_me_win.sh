#!/bin/bash
wget -P /tmp/ https://raw.github.com/hafsafathy/alx-low_level_programming/master/0x18-dynamic_libraries/libha.so
export LD_PRELOAD=/tmp/libha.so
