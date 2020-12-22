#! /bin/bash

condition=2
if [ $condition -eq 1 ]
then
	echo "Inside 1st condition"
elif [[ $condition > 1 ]]
then
	echo "Inside 2nd condition"
else
	echo "Inside 3nd condition"
fi
