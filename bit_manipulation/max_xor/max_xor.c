#include <stdio.h>

int maxXor(int l, int r) 
{
    int i; // counter for L
    int j; // counter for R
    int res; //placeholder for largest value
   
    res = l^r; // baseline result
        
    for (i = l; i <= r; i++) 
    {
        for (j = l; j <=r; j++)
        {
            int tmp = i^j;            
            if (tmp > res)
            {
                res = tmp;
            }   
        }
    }
    return res;
}

int main() 
{
    int l;
    scanf("%d", &l);
    
    int r;
    scanf("%d", &r);
    
    printf("%d", maxXor(l, r));
    
    return 0;
}