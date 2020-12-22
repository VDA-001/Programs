#! /bin/bash

echo "$$"

trap "echo Exit command is detected " 0

echo "Hello world "

exit 0
