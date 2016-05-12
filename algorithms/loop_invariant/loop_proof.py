def insertion_sort(list):
    print(" ".join(map(str,list)))    
    for i in range(1, len(list)):
        print(" ".join(map(str,list)))
        count = i-1
        key = list[i]
        while (count > 0) and (list[count] > key):
           list[count+1] = list[count]
           count -= 1
           list[count+1] = key
           print(" ".join(map(str,list)))


m = int(input().strip())
ar = [int(i) for i in input().strip().split()]
insertion_sort(ar)
print(" ".join(map(str,ar)))