#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool debug = false;

int findDigits(int n)
{
    if (debug)
    {
        printf("Number into findDigits: %d\n", n);
    }

    int digitCount = 0;
    int resultCount = 0;
    int i = n;
    int j = n;
    int arr[(1 << 9)];

    while (i != 0)
    {
        i /= 10;
        digitCount++;
    }

    if (debug)
    {
        printf("Number of Digits in %d: %d\n", n, digitCount);
    }

    for (int k = 0; k < digitCount; k++)
    {
        arr[k] = j % 10;
        j = j / 10;

        if (debug)
        {
            printf("Digit %d is %d\n", k+1, arr[k]);
        }

        if (arr[k] != 0) // Don't try to divide by 0
        {

            if (n % arr[k] == 0)
            {
                if (debug)
                {
                    printf("n = %d\n", n);
                    printf("arr[k] = %d\n", arr[k]);
                }

                resultCount++;
            }
        }

    }

    printf("%d\n", resultCount);

    return EXIT_SUCCESS;
}


int main(int argc, char* argv[])
{
    if (debug)
    {
        printf("Number of Testcases: %d\n", argc - 2);
    }

    for (int i = 2; i < argc; i++)
    {
        if (debug)
        {
            printf("Number in Testcase %d: %s\n", (i - 1), argv[i]);
        }

        findDigits(atoi(argv[i]));
    }

    return EXIT_SUCCESS;
}