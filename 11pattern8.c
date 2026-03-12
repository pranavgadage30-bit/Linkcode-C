#include <stdio.h>

int main()
{
    int n = 4, i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= 1; j--)
        {

            printf("%d", j);
        }
        printf("\n");
    }
}

//4321 4321 4321 4321