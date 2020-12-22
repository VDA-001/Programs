#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the countingValleys function below.
def countingValleys(n, s):
    SeaLevel=0
    Vcount=0
    Mcount=0
    for i in range(n):
        if(s[i]=='D'):
            SeaLevel+=-1
        elif(s[i]=='U'):
            SeaLevel+=1
        if(SeaLevel==0 and s[i]=='U'):
            Vcount+=1
        elif(SeaLevel==0 and s[i]=='D'):
            Mcount+=1
    return Vcount
if __name__ == '__main__':
    n = int(input())
    s = input()
    s.split()
    result = countingValleys(n, s)
    print(result)

