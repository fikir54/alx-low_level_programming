#!/bin/bash
wget -P /tmp https://github.com/fikir54/alx-low_level_programming/edit/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD=/tmp/libdaynamic.so
