#!/bin/python

import math
import os
import random
import re
import sys
import array
# Complete the migratoryBirds function below.
def migratoryBirds(arr):
    type=[]
    count=[1]*len(arr)
    maxi=0
    for i in range(len(arr)):
        if(arr[i] in type):
            k=type.index(arr[i],0,len(type))
            count[k]+=1
        else:
            type.append(arr[i])
    x=len(count)-len(type)
    count=count[:-x]
    for b in range(len(count)):
        if(count[b]>maxi):
            maxi=count[b]
    return type[count.index(maxi,0,len(count))]
    
            
if __name__ == '__main__':


    n = int(input().strip())

    arr = []
    for i in range(n):
        x=int(input())
        arr.append(x)

    result = migratoryBirds(arr)
    print(result)

