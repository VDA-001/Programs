#! /bin/bash

#select var in list
#do
#	command1
#	command2
#	...
#done

#select name in mark john tom ben
#do
#	echo "$name selected"
#done

select name in mark john tom ben
do
	case $name in
	"mark" )
		echo "mark selected"
		;;
	tom )
                echo tom selected
                ;;
	john )
                echo john selected
                ;;
	* )
		echo "Unknown"
		;;
	esac
done
