#! /bin/bash

#while [ condition ]
#do
#	command1
#	command2
#	...
#done

var=1

while [ $var -le 10 ]
do
	echo "$var"
	var=$(( var+1 ))
	konsole &
	#sleep 1
done

