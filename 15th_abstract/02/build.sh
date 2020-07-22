#!/bin/sh
echo —————————————————————————————————————
echo make
make
echo ——————————————————————————————————————
echo ./Human
export LD_LIBRARY_PATH=./:$LD_LIBRARY_PATH
./Human
rm ./*.o
