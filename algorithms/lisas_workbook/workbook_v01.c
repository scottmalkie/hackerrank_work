#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

#define debug true

uint8_t findSpecialProblems(uint8_t chapters, uint8_t problemsPerPage, uint8_t problemsPerChapter[])
{
    uint8_t specialProblems = 0;
    uint8_t totalPages = 0;
    
    for (uint8_t i = 0; i < chapters; i++)
    {
        uint8_t numberOfPages = ((problemsPerChapter[i] / problemsPerPage) + !!(problemsPerChapter[i] % problemsPerPage));
        
        // what page does each chapter start on?
        // special problem if page num and problem num match
        
        
        if (debug)
        {
            printf("%hhu problems in chapter / %hhu problems per page = %hhu pages in chapter %hhu\n", problemsPerChapter[i], problemsPerPage, numberOfPages, i);
        }   
        
        totalPages += numberOfPages;
    }
    
    if (debug)
    {
        printf("total number of pages = %hhu\n", totalPages);
    }
    
    return specialProblems;
}


int main(void) 
{
    uint8_t chapters;
    uint8_t problemsPerPage;
    scanf("%hhu %hhu", &chapters, &problemsPerPage);
    
    if (debug)
    {
        printf("chapters = %hhu\n", chapters);
        printf("problems per page = %hhu\n", problemsPerPage);
    }
    
    uint8_t problemsPerChapter[chapters];
    
    for (uint8_t i = 0; i < chapters; i ++)
    {
        scanf("%hhu", &problemsPerChapter[i]);
        
        if (debug)
        {
            printf("problems in chapter %d = %hhu\n", i + 1, problemsPerChapter[i]);
        }
                
    }   
    
    printf("%hhu", findSpecialProblems(chapters, problemsPerPage, problemsPerChapter));
 
    return 0;   
}
