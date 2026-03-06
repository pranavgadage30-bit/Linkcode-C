// prime number
#include <stdio.h>

int main()
{

    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    int start = 2, flag = 1;
    while (start <= num / 2)
    {
        if (num % start == 0)
        {
            flag = 0;
            break;
        }
        start++;
    }
    if (flag == 1)
    {
        printf("It s a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}

// tables

#include <stdio.h>

int main()
{

    int i, j;

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%dx%d=%d\n", i, j, i * j);
        }
    }
}

// horizontal tables

#include <stdio.h>

int main()
{

    int i = 1, j = 1, num = 10;

    while (j <= num)
    {
        i = 1;
        {
            while (i <= num)
            {
                printf("%d", i * j);
                i++;
            }
        }
        printf("\n");
        j++;
    }
}

// Factors of numbers

#include <stdio.h>

int main()
{

    int i, n;

    printf("Enter any number:");
    scanf("%d", &n);

    i = 2;
    printf("\nFactor of %d are\n", n);
    while (i < n / 2)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}

// Factoral of number

#include <stdio.h>

int main()
{
    int i, n, result;

    printf("Enter any number:");
    scanf("%d", &n);

    i = 1;
    result = 1;

    while (i <= n)
    {
        result = result * i;
        i++;
    }
    printf("Factorial of %d is %d", n, result);
}