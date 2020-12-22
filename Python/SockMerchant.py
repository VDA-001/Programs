#!/bin/python

import math
import os
import random
import re
import sys

# Complete the sockMerchant function below.
def sockMerchant(n, ar):
    br=[]
    a=[]
    for i in range(n):
        count=1
        q=ar[i]
        s=False
        for h in br:
            if(q==h):
                s=True
        if(s):
            continue
        else:
            for j in range(i,n):
                if(i==j):
                    continue
                elif(q==ar[j]):
                    count+=1
            a.append(count)
            br.append(ar[i])
    sume=0
    for k in range(len(a)):
        f=int(a[k]/2)
        sume+=f
    return(sume)

if __name__ == '__main__':
    n = int(input())
    ar=[]
    for y in range(n):
        ar.append(int(input()))
    result = sockMerchant(n, ar)
    print(result)
