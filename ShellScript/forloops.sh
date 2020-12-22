#! /bin/bash
#for loops

#for (( exp1; exp2; exp3 ))
#do
#	command1
#	command2
#	....
#done

#for i in 1 2 3 4 5
#do
#	echo $i
#done

#for i in {1..10..2} # {1..10} {start..end..increment}
#do
#	echo $i
#done

#for i in ls pwd date
#do
#	echo "..........$i.........."
#	$i
#done

for i in *
do
	if [ -f $i  ]
	then
		echo $i
	fi
done
