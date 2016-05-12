#!/bin/python3
import sys
import itertools

n = int(input().strip())

for x in range(0, n):
    b = itertools.repeat(' ', (n-1)-x) 
    c = itertools.repeat('#', x+1)
    for _ in b:
        sys.stdout.write(_)
    for _ in c:
        sys.stdout.write(_)
    sys.stdout.write("\n")