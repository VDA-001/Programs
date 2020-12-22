
from __future__ import print_function

import os
import sys

#
# Complete the staircase function below.
#
def staircase(n):
    b=n-1
    for i in range(1,n+1):
        if(b==0):
            print("#"*i)
        else:
            print(" "*(b-1),"#"*i)
        b=b-1
if __name__ == '__main__':
    n = int(input())

    staircase(n)