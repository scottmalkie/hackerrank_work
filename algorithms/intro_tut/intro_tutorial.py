#!/bin/python3
import sys

v = int(input().strip())
n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

for x in range(0, arr.__len__()):
    if arr[x] == v:
        print(x)
        
