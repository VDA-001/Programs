#! /bin/bash

echo "Enter the names : "
read name1 name2 name3
echo "Entered names are : $name1, $name2, $name3."

read -p 'username : ' user_var
echo $user_var 

read -sp 'password : ' pass_var #Invisible input
echo $pass_var

echo "Enter names : "
read -a  names
echo "First name in the array "${names[0]}

echo "Enter something"
read
echo "Something : $REPLY"


