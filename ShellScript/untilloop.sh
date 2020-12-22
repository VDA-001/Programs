#! /bin/bash
# until loops

#until [ condition ]
#do
#	command1
#	command2
#	....
#	commandN
#done

n=1
until (( $n >=10 ))
do
	echo "$n"
	n=$(( n+1 ))
done
