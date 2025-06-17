#!/bin/sh
free | awk '/Mem:/ { printf "󱡠  %.2f%%\n", $3/$2 * 100 }'
sleep 1
