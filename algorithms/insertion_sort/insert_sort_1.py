#!/bin/python3
import sys

n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]

# helper function to print array the way they want it
def print_array(array):
    for x in array:
        sys.stdout.write(str(x) + ' ')
    sys.stdout.write("\n")

# if unsorted item is already bigger than last element, do nothing
if arr[arr.__len__()-1] > arr[arr.__len__()-2]:
    print_array(arr)
    sys.exit(0)

# assign unsorted item to to_ins and remove it
to_ins = arr[(arr.__len__()-1)]
del arr[arr.__len__()-1]

# insertion sort happens here
for x in range(arr.__len__()-1, -1, -1):
    if arr[x] > to_ins:
        if x == arr.__len__()-1:
            arr.append(arr[x])
        elif x == 0:
            arr[x+1] = arr[x]
            print_array(arr)
            arr[x] = to_ins
        else:
            arr[x+1] = arr[x]
    elif arr[x] == to_ins:
        pass
    elif arr[x] < to_ins:   
        arr[x+1] = to_ins
        print_array(arr)
        exit(0)
    print_array(arr)
