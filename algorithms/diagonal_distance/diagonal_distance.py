#!/bin/python3
import sys
import math
import itertools

n = int(input().strip())
a = []
for a_i in range(n):
    a_t = [int(a_temp) for a_temp in input().strip().split(' ')]
    a.append(a_t)
    
b = list(itertools.chain.from_iterable(a))

diag1 = []
diag1.append(1)   
for y in range(n-1):
    diag1.append(diag1[y]+(n+1))

diag2 = []
diag2.append(n)
for x in range(n-1):
    diag2.append(diag2[x]+(n-1))

diag1_sum = 0
for i in range(0, diag1.__len__()):
    diag1_sum = diag1_sum + b[(diag1[i])-1]
        
diag2_sum = 0
for j in range(0, diag2.__len__()):
    diag2_sum = diag2_sum + b[(diag2[j])-1]
    
print(int(math.fabs(diag1_sum - diag2_sum)))