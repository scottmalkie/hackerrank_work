#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool debug = false;

int squaresCount(int n1, int n2)
{
    if (debug)
    {
        printf("Number 1 is %d, Number 2 is %d\n", n1, n2);
    }

    int squaresCount1 = 0;
    int squaresCount2 = 0;

    for (int i = 1; i <= n1; i++)
    {
        int x = sqrt(i);
        if (x * x == i)
        {
            if (debug)
            {
                printf("%d is a square!\n", i);
            }

            squaresCount1++;
        }
    }

    for (int j = 1; j <= n2; j++)
    {
        int y = sqrt(j);
        if (y * y == j)
        {
            if (debug)
            {
                printf("%d is a square!\n", j);
            }

            squaresCount2++;
        }

    }

    if (squaresCount2 == squaresCount1)
    {
        return 1;
    }

    return (squaresCount2 - squaresCount1);
}


int main(int argc, char* argv[])
{
    if (debug)
    {
        printf("Number of Testcases: %s\n", argv[1]);
    }

    for (int i = 2; i < argc; i = i+2)
    {
        if (debug)
        {
            printf("Numbers in Testcase %d: %s, %s\n", (i / 2), argv[i], argv[i+1]);
        }

        printf("%d\n", squaresCount(atoi(argv[i]), atoi(argv[(i+1)])));

    }

    return EXIT_SUCCESS;
}

