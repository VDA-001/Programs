#! /bin/bash

echo -e "Enter the name of the file : \c"
read filename

if [ -e $filename ] #-e flag is used to check whether the file is present in the current directory or not
#-f flag to check if the file exists and to check whether it is a regular file or not
#-d to check for directories
#-b for block special file(video file, music file, image file)
#-c for characterspecial file (text file)
#-s to check if file is empty or not
#-r to check if file has read permission(similarly  x and w)
then 
	echo "$filename found "
else
	echo "$filename not found"
fi
