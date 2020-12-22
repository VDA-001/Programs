#! /bin/bash

#case expression in
#	pattern )
#		statements ;;
#	pattern2 )
#		statements ;;	
#esac

echo "Select any of those from the list(car,van,bike)"
read vehicle

case $vehicle in
	"car" )
		echo "Rent of $vehicle is 100 dollar" ;;
	"van" )
                echo "Rent of $vehicle is 200 dollar" ;;
	"bike" )
                echo "Rent of $vehicle is 80 dollar" ;;
	* )
		echo "Unknown vehicle" ;;
esac
