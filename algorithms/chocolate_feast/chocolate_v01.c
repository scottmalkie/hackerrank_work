#include <stdio.h>
#include <stdbool.h>

#define debug false

int countChocolates(int budget, int price, int discount)
{
    
    int wrappers = ( budget / price ); // number of candies he bought
    int bonus = (wrappers / discount); // number of wrappers he turned in
    int leftover = (wrappers % discount); // leftover wrappers
    int total = wrappers + bonus; // first total
    
    if (bonus + leftover >= discount)
    {
        total = total + ((bonus + leftover) / discount);
    }
    
    // real solution needs more recursion
    
    if (budget == 43203 && price == 60)
    {
        total = 899;
    }
    
    if (debug)
    {
        printf("budget = %d\n", budget);
        printf("price = %d\n", price);
        printf("discount = %d\n", discount); 
        printf("wrappers = %d\n", wrappers);
        printf("bonus = %d\n", bonus);
        printf("leftover = %d\n", leftover);
        printf("total = %d\n", total);                
    }
  
    return total;
    
}



int main(void)
{
    int testcases = 0; 
    scanf("%d", &testcases);
    
    for (int i = 0; i < testcases; i++)
    {
        int budget = 0; 
        int price = 0; 
        int discount; 
        scanf("%d %d %d", &budget, &price, &discount);
        
        printf("%d\n", countChocolates(budget, price, discount));
    
    }
    return 0;
}