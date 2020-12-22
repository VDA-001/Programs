#! /bin/bash

#function name(){
#	commands
#}
# or
#name () {
#	commands
#}

function print(){
	echo "$1 $2 these are arguments"
}

quit () {
	exit
}

print Hello vishal
quit

