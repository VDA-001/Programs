#!/bin/python

from __future__ import print_function

import os
import sys

#
# Complete the pageCount function below.
#
def pageCount(n, p):
    front=0
    x=0
    rev=0
    y=0
    for i in range(1,n+1):
        if(i==1):
            if(p==i):
                return 0
            else:
                continue
        else:
            if(x==i):
                continue
            else:
                if(p==i or p==i+1):
                    front+=1
                    break
                else:
                    front+=1
                    x=(i+1)
    if(n%2==0):
        if(p==n):
            return 0
        else:
            rev+=1
        for j in range(n-1,0,-1):
            if(y==j):
                continue
            else:
                if(p==j or p==j-1):
                    break
                else:
                    rev+=1
                    y=(j-1)
    else:
        for j in range(n,0,-1):
            if(y==j):
                continue
            else:
                if(p==j or p==j-1):
                    break
                else:
                    rev+=1
                    y=(j-1)
    if(rev<front):
        return rev
    else:
        return front



if __name__ == '__main__':
    n = int(input())
    p = int(input())

    result = pageCount(n, p)
    print(result)

