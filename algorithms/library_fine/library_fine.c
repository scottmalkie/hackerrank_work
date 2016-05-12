#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_Date
{
    int day;
    int month;
    int year;
} s_Date;

int calculate_fine(s_Date *actualDate, s_Date *expectedDate)
{
    unsigned int uFine = 0;
    
    

    return uFine;
}

int main(void) 
{
    s_Date actualDate;
    s_Date expectedDate;
    
    scanf("%d %d %d", &actualDate.day, &actualDate.month, &actualDate.year);
    scanf("%d %d %d", &expectedDate.day, &expectedDate.month, &expectedDate.year);
 
    printf("%d", calculate_fine(&actualDate, &expectedDate));
    
    return EXIT_SUCCESS;
    
}