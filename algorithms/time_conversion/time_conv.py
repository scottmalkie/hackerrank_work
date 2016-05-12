#!/bin/python3
import sys

time = input().strip()
'''
pm = False
if (time[8:]) == 'PM':
    pm = True
    
if pm == False:
    if time[:2] == '12':
        print("00" + time[2:8])
    else:
        print(time[:8])

if pm == True:
    new_hr = int(time[:2]) + 12
    if new_hr == 24:
        new_hr = "12"
    print(str(new_hr) + time[2:8])
'''    
new_hr = ""
if time[:2] == '12' and time[8:] == 'AM':
    new_hr = "00"
elif time[:2] == '12' and time[8:] == 'PM':
    new_hr = "12"
elif time[8:] == 'AM':
    new_hr = time[:2]
elif time[8:] == 'PM':
    new_hr = str(int(time[:2]) + 12)
else:
    print("Error! Couldn't parse time.")

print(new_hr + time[2:8])