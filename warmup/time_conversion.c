#include <stdio.h>
#include <stdlib.h>

int standardToMilitary(char* time)
{
    int digit1 = ((int) time[0] - 48);
    int digit2 = ((int) time[1] - 48);     

    int digitsum = ((digit1 * 10) + digit2);
    digitsum += 12;

    if (time[8] == 'P')
    {   
        if (digitsum == 24)
        {
            printf("12");
        }
        else 
        {
            printf("%i", digitsum);
        }
    }
    
    if (time[8] == 'A')
    {
        if (digitsum == 24)
        {
            printf("00");
        }
        else 
        {
        printf("%c", time[0]);
        printf("%c", time[1]);
        }   
    }
    
    for (int i = 2; i < 8; i++)
    {
        printf("%c", time[i]);
    }
    return 0;
}


int main()
{
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s", time);
    
    standardToMilitary(time);

    return 0;
}
