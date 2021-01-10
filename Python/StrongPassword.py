#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumNumber function below.
def minimumNumber(n, password):
    i=0
    t=0
    s=password
    num=False
    upr=False
    lwr=False
    regex = re.compile('[@_!#$%^&*()<>?/\|}{~:+-]') 
    if regex.search(s)==None:
        t+=1
    while i<n:
        if s[i].isupper():
            upr=True
        if s[i].islower():
            lwr=True
        if s[i].isdigit():
            num=True
        i+=1
    if not upr:
        t+=1
    if not lwr:
        t+=1
    if not num:
        t+=1
    if n<6:
        dif=6-n
        if dif>t:
            return dif
    return t

        
if __name__ == '__main__':

    n = int(input())

    password = input()

    answer = minimumNumber(n, password)

    print(answer)
