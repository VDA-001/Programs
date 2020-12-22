#!/bin/python

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(meal_cost, tip_percent, tax_percent):
    tip_cost,tax_cost=0,0
    ttl=0
    tip_cost=meal_cost*(float(tip_percent)/100)
    tax_cost=meal_cost*(float(tax_percent)/100)
    total_cost=meal_cost+tip_cost+tax_cost
    ttl=int(total_cost)
    if((total_cost%ttl)==0.5):
        total_cost+=1
    print(int(total_cost))
if __name__ == '__main__':
    meal_cost = float(input())

    tip_percent = int(input())

    tax_percent = int(input())

    solve(meal_cost, tip_percent, tax_percent)