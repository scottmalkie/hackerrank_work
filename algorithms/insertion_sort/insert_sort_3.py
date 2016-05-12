#!/bin/python3
import sys

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# helper function to print array the way they want it
def print_array(array):
    for x in array:
        sys.stdout.write(str(x) + ' ')
    sys.stdout.write("\n")

for i in range(1, arr.__len__()):
    tmp = arr[i] 
    count = i
    while count > 0 and tmp < arr[count-1]:
        arr[count] = arr[count-1]
        count = count - 1
    arr[count] = tmp 
    print_array(arr)
    