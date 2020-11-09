#!/bin/bash

num1=10
num2=20

echo $(( num1 + num2 ))
echo $(( num1 * num2 ))
echo $(expr $num1 + $num2 )
echo $(expr $num1 \* $num2 )

echo "29 + 2" | bc
echo "$num1 + $num2" | bc
echo "scale=8;sqrt($num1)" | bc -l
echo "scale=8;2^($num1)" | bc -l

/home/shali/Documents/shell_project