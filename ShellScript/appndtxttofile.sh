#! /bin/bash

echo -e "Enter the name of the file : \c"
read filename

if [ -f $filename ]
then
	if [ -w $filename ]
	then
		echo "Type some text data. To quit press ctrl+d"
		cat >> $filename
	else
		echo "The file do not have write permission"
	fi
else
	echo "The file doesn't exist"
fi
