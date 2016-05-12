#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool debug = false;

int sherlock(char * a)
{

    int n = atoi(a);

    if (debug)
    {
        printf("Source Integer as string: %s\n", a);
        printf("Source Integer as int: %d\n", n);
    }

    if (n == 1 || n == 2 || n == 4 || n == 7) // easy edge cases
    {
        printf("-1\n");

        return EXIT_SUCCESS;
    }

    if (n == 5) // only time this is valid
    {
        printf("33333\n");

        return EXIT_SUCCESS;
    }

    if (n == 10) // only time this is valid
    {
        printf("3333333333\n");

        return EXIT_SUCCESS;
    }


    if (n % 3 == 0) // if divisible by 3, all 5s is always largest, and we're done
    {
        for (int i = 0; i < n; i++)
        {
            printf("5");
        }

        printf("\n");

        return EXIT_SUCCESS;
    }

    if (n % 3 == 1) // 22
    {
        if (n - 10 > 0) //sanity check
        {
            n -= 10;

            for (int k = 0; k < n; k++)
            {
                printf("5");
            }

            for (int j = 0; j < 10; j++)
            {
                printf("3");
            }

            printf("\n");
        }

        return EXIT_SUCCESS;

    }


    if (n % 3 == 2) // 23
    {
        if (n - 5 > 0) //sanity check
        {
            n -= 5;

            for (int k = 0; k < n; k++)
            {
                printf("5");
            }

            for (int j = 0; j < 5; j++)
            {
                printf("3");
            }

            printf("\n");
        }

        return EXIT_SUCCESS;
    }

    return EXIT_FAILURE; // should never reach here
}

int main(int argc, char* argv[])
{

    if (debug)
    {
        printf("Number of Testcases: %d\n", argc - 2);
        if (atoi(argv[1]) == (argc - 2))
        {
            printf("Testcases Match!\n");
        }
    }

    for (int i = 2; i < argc; i++)
    {
        sherlock(argv[i]);
    }

    return EXIT_SUCCESS;
}