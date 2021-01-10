
import math
import os
import random
import re
import sys

# Complete the minimumBribes function below.
def minimumBribes(q):
    a=[0]*len(q)
    count=0
    
    for j in range(len(q)-1):
        for i in range(len(q)-1):
            if q[i]>q[i+1]:
                if a[i]<2:
                    a[i]+=1
                    count+=1
                    q[i],q[i+1]=q[i+1],q[i]
                    a[i],a[i+1]=a[i+1],a[i]
                else :
                    return "Too chaotic"
                    break  
    return count
if __name__ == '__main__':
    t = int(input())
    result=[]
    for t_itr in range(t):
        n = int(input())

        q = list(map(int, input().rstrip().split()))
        result.append(minimumBribes(q))
    print(*result,sep="\n")