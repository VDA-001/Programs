#! /bin/bash

echo -e "Enter some character : \c"
read value

case $value in
	[a-z] )
		echo "The character $value is lowecase" ;;
	[A-Z] )
		echo "The character $value is Uppercase" ;;
	[0-9] )
		echo "The character $value is a number " ;;
	? )
		echo "The character $value entered is a special char" ;;
	* )
		echo "Uknown Input" ;;
esac
