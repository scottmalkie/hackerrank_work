#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool debug = false;

int growthCycle(int* n) //represents one cycle
{

    if (debug)
    {
        printf("Before: %d\n", *n);
    }

    *n *= 2;

    if (debug)
    {
        printf("Doubled: %d\n", *n);
    }

    *n = *n + 1;

    if (debug)
    {
        printf("Plus One: %d\n", *n);
    }

    return *n;
}

int growthResult(int n) // calculates final results
{
    if (n == 0)  // edge case
    {
        printf("1\n");
        return EXIT_SUCCESS;
    }

    if (n == 1) //edge case
    {
        printf("2\n");
        return EXIT_SUCCESS;
    }

    int startValue = 1;

    if (n % 2 == 0)
    {
        int numberOfCycles = ( n / 2 );

        for (int i = 0; i < numberOfCycles; i++)
        {
            if (debug)
            {
                printf("Starting Cycle %d:\n", (i + 1));
            }

            growthCycle(&startValue);

        }

        printf("%d\n", startValue);
        return EXIT_SUCCESS;
    }

    if (n % 2 == 1)
    {
        n = n - 1; // make it even

        int numberOfCycles = ( n / 2 );

        for (int i = 0; i < numberOfCycles; i++)
        {
            if (debug)
            {
                printf("Starting Cycle %d:\n", (i + 1));
            }

            growthCycle(&startValue);

        }

        printf("%d\n", (startValue * 2)); // last one always a double
        return EXIT_SUCCESS;
    }

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
            printf("Cycles in Testcase %d: %s\n", (i - 1), argv[i]);
        }

        growthResult(atoi(argv[i]));
    }

    return EXIT_SUCCESS;
}