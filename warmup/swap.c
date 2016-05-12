#include <stdio.h>

void swap(int* x, int* y) 
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void swap2(int* x, int* y)
{
    int temp = *y;
    y = x;
    x = &temp;
    
}

int main()
{
    int a = 5;
    int b = 6;
    
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    
    swap2(&a, &b);
    
    printf("a = %i\n", a);
    printf("b = %i\n", b);
    
    return 0;
}