#include <stdio.h>

#define SPACE ' '
#define POUND '#'

int main(){
    int n; 
    scanf("%d",&n);

    int i = -1;
    
    while (++i < n)
    {
        int j;
        j = i;
        int k;
        k = i;
        while (++j < n)
        {
            printf("%c", SPACE);
        }
        while (k-- >= 0)
        {
            printf("%c", POUND);
        }
        printf("\n");
    }
    
    return 0;
}