#!/bin/python3

import os
import sys

#
# Complete the twoStacks function below.
#
def twoStacks(x, a, b):
    counta=0
    countb=0
    sumi=0
    length=0
    while(sumi<=x):
        
        if len(a)!=0 and len(b)!=0:
            if(counta>3):
                counta=0
                sumi+=b[0]
                b.pop(0)
                length+=1
                continue
            elif(countb>3):
                countb=0
                sumi+=a[0]
                a.pop(0)
                length+=1
                continue
            if a[0]!=b[0]: 
                y=min(a[0],b[0])
            else:
                y=b[0]
            sumi+=y
            if a[0]==y:
                counta+=1
                countb=0
                a.pop(0)
            else:
                countb+=1
                counta=0
                b.pop(0)
            length+=1
        elif len(a)==0 and len(b)!=0:
            sumi+=b[0]
            b.pop(0)
            length+=1
        elif len(b)==0 and len(a)!=0:
            sumi+=a[0]
            a.pop(0)
            length+=1
        else:
            break
    return length-1
    

if __name__ == '__main__':
    result=[]
    g = int(input())

    for g_itr in range(g):
        nmx = list(map(int, input().rstrip().split()))

        n = int(nmx[0])

        m = int(nmx[1])

        x = int(nmx[2])

        a = list(map(int, input().rstrip().split()))

        b = list(map(int, input().rstrip().split()))

        result.append(twoStacks(x, a, b))
    print(result)
