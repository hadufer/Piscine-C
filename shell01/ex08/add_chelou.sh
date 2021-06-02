#!/bin/sh
NBR_TR_ADD="$(echo $FT_NBR1 | tr \''\\\"\?\!' '01234') + $(echo $FT_NBR2 | tr 'mrdoc' '01234')"
echo "obase=13; ibase=5; $NBR_TR_ADD" | bc | tr '0123456789ABC' 'gtaio luSnemf'
