#! /bin/bash

echo "Enter a number"
read num
mod=$(($num%2))
if [ "$mod" -eq 0 ]
then
	echo "Number is even"
else
	echo "Number is odd"
fi

