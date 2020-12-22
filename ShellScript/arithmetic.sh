#! /bin/bash

num1=20
num2=5
# These are of integers

# echo $(expr $num1 + $num2 )
# echo $(expr $num1 \* $num2)
echo $((num1+num2))
echo $((num1-num2))
echo $((num1*num2))
echo $((num1/num2))
echo $((num1%num2))

#These are for float valued number

a=20.5
b=5

echo "20.5+5" | bc
echo "20.5-5" | bc
echo "20.5*5" | bc
echo "scale=2;20.5/5" | bc
echo "20.5%5" | bc

echo "$a+$b" | bc

echo "scale=2;sqrt($a)" | bc -l

echo "scale=2;3^3" | bc -l
