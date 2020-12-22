#! /bin/bash

echo "Enter the age"
read age
#[ "$age" -gt 18 -a "$age" -lt 30 ]
#[ "$age" -gt 18 ] || [ "$age" -lt 30 ]
if [ "$age" -gt 18 ] && [ "$age" -lt 30 ]
then 
	echo "Valid age"
else
	echo "Not Valig age"
fi 
