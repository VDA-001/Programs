#! /bin/bash

var=31

readonly var

var=50
echo "$var"

function hello(){
echo "Hello World"
}

readonly -f hello

function hello(){
echo "Hello world again"
}
hello

readonly
readonly -f
