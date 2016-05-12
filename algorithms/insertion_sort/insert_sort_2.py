#!/bin/python3
import sys
import itertools

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# helper function to print array the way they want it
def print_array(array):
    for x in array:
        sys.stdout.write(str(x) + ' ')
    sys.stdout.write("\n")

for x in range(0, arr.__len__()-1):
    y = 0
    if arr[x] < arr[y]:
        arr[x], arr[y] = arr[y], arr[x]
    print_array(arr)
    y = y + 1


'''
is index 0 greater than index 1?
    yes - swap 0 and 1 and go to next index
    no - add 1 to check

    if x == 0:
        if arr[x] > arr[x+1]:
            temp = arr[x+1]
            arr[x+1] = arr[x]
            arr[x] = temp
        print("1st index")
    elif arr[x-1] > arr[x]:
        temp = arr[x-1]
        arr[x-1] = arr[x]
        arr[x] = temp
    elif arr[x-1] < arr[x] and arr[x] < arr[x+1]:
        pass
    elif arr[x-1] < arr[x] and arr[x] > arr[x+1]:
        temp = arr[x+1]
        arr[x+1] = arr[x]
        arr[x] = temp
    elif arr[x] == (arr.__len__()-1):
        pass
    print_array(arr)    
'''    