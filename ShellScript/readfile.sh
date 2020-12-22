#! /bin/bash
#while loops

#while read p
#do
#	echo $p
#done < hello.sh

while IFS= read -r p
do
	echo $p
done < /etc/host.conf


