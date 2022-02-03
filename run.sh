#!/bin/bash
exe=$(echo "$1" | cut -f 1 -d '.')
bar="------------------------------------"
>&2 echo -e "Compiling $1 with c++17 and SMIE flag" &&
g++ -std=gnu++17 -Wshadow -Wall -Wextra -Wno-unused-result -O2 -g -fsanitize=undefined -fsanitize=address -D SMIE "$1" -o "$exe" &&
>&2 echo -e "\tRunning $exe\n$bar" &&
ts=$(gdate +%s%N) &&
\gtime -f "\n$bar\nMemory Usage   : %M KB" "./$exe" &&
>&2 echo -e "Execution Time : $((($(gdate +%s%N) - $ts)/1000000)) ms"