#! /bin/bash

function is_file_exists(){
	local filename="$1"
	if [ -e $filename ]
	then
		echo "$filename exists in the current location"
	else
		echo "$filename doesn't exists in the current location"
	fi
}

read filename
if [ $filename ]
then
	is_file_exists $filename
else
	echo "No input"
fi

