#!/bin/python3
import sys
import math

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

pos_count = 0.0
neg_count = 0.0
zero_count = 0.0
for x in arr:
    if x > 0:
        pos_count = pos_count + 1.0
    elif x == 0:
        zero_count = zero_count + 1.0
    elif x < 0:
        neg_count = neg_count + 1.0
    else:
        print("Error in parsing array!")

print(pos_count/n)
print(neg_count/n)
print(zero_count/n)