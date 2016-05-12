#include <stdio.h>
#include <stdbool.h>

#define LOU "Louise"
#define RIC "Richard"

char* counter(unsigned long long int n)
{    
    bool gameOver = false;
    int number_of_turns = 0;  
    
    // edge cases: n starts at 1 (richard wins because louise can't go); n starts at 2 (louise wins but it breaks the pattern)
    if (n == 1)
    {
        number_of_turns = 1;
        gameOver = true;
    }
    if (n == 2)
    {
        number_of_turns = 3;
        gameOver = true;
    }
    
    unsigned long long int powers_of_two[64] = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296,8589934592,17179869184,34359738368,68719476736,137438953472,274877906944,549755813888,1099511627776,2199023255552,4398046511104,8796093022208,17592186044416,35184372088832,70368744177664,140737488355328,281474976710656,562949953421312,1125899906842624,2251799813685248,4503599627370496,9007199254740992,18014398509481984,36028797018963968,72057594037927936,144115188075855872,288230376151711744,576460752303423488,1152921504606846976,2305843009213693952,4611686018427387904,9223372036854775808};
    
    while (gameOver == false)
    {  
        for (int j = 63; j > 0; j--) // start down, find one smaller, subtract from next one up
        {
            //printf("N is %llu\n", n);
            if (n == 1)
            {
                gameOver = true;
            }
            else if (powers_of_two[j] == n)
            {
                number_of_turns += j;
                //printf("Power of 2! Number of Turns: %i\n", number_of_turns);
                gameOver = true;
                break;
            }
            else if (n > powers_of_two[j])
            {
                    //printf("Not Power of 2! Subtracting %llu from %llu\n", powers_of_two[j], n);
                    n = n - powers_of_two[j];
                    number_of_turns++;
                    //printf("Number of Turns: %i\n", number_of_turns);
            }
        }
    }
    
    if (gameOver == true)  // game over, last successful turn wins
    {
        if (number_of_turns == 1)
        {
            return RIC;
        } 
        else if (number_of_turns % 2 == 1)
        {
            return LOU;
        }
        else if (number_of_turns % 2 == 0)
        {
            return RIC;
        }
        else 
        {
            return "Error! Couldn't parse number_of_turns.";
        }
    }

    return "Error! gameOver was never set to true."; //should never reach this
}

int main() 
{
    int t; // number of testcases
    scanf("%d", &t);
    
    unsigned long long int array[t]; // initial numbers
    
    for (int i = 0; i < t; i++)
    {
        scanf("%llu", &array[i]);
        printf("%s\n", counter(array[i]));
    }
    
    return 0;
}