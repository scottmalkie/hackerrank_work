#include <stdio.h>
#include <stdbool.h>

bool debug = false;

int xor_array(unsigned long int array[]) 
{
    unsigned long int n = array[0];
    int res = 0;
    
    for (unsigned long int k = 0; k <n; k++)
    {
        for (unsigned long int i = 1; i < n; i++)
        {
            int tmp = array[k] ^ array[k+i]
            res ^= tmp
        }
    }
    return res;
}

int main() 
{
    int t;
    scanf("%i", &t);
    if (debug == true) 
    {
        printf("Number of Testcases: %i\n", t);
    }
    
    unsigned long int array[t][500000];
    
    for (int i = 0; i < t; i++)
    {
        scanf("%lu", &array[i][0]);
        if (debug == true) 
        {
            printf("Number of Elements in Testcase %i: %lu\n", (i+1), array[i][0]);
        }
        
        for (int j = 1; j <= array[i][0]; j++)
        {
            scanf("%lu", &array[i][j]);
            if (debug == true) 
            {
                printf("Element %i of Set %i: %lu\n", j, (i+1), array[i][j]);
            }
        }    
       
        printf("%i\n", xor_array(array[i])); 
    
    }
}