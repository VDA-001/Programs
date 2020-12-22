#! /bin/bash

os=('ubuntu' 'linuxmint' 'window')
echo "${os[2]}"
echo "${os[1]}"
echo "${!os[@]}"	#index of the array
echo "${#os[@]}"	#length of the array
os[3]='kalilinux'
echo "${os[3]}"
os[0]='archlinux'
echo "${os[0]}"
unset os[0]
echo "${os[@]}"
