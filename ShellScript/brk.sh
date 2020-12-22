# /bin/bash

for (( i=1 ; i<=10 ; i++ ))
do
	if (( $i >= 5 && $i<9 ))
	then
		#break
		continue
	fi
	echo "$i"
done
