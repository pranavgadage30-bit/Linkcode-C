#include <stdio.h>

int main()
{

    int n, r, i, cnt;
    int temp;
    int result;
    int sum = 0;

    printf("Enter any number:");
    scanf("%d", &n);
    temp = n;

    cnt = 0;
    while (n != 0)
    {
        cnt++;
        n = n / 10;
    }

    n = temp;
    while (n != 0)
    {
        r = n % 10;
        result = 1;

        for (i = 1; i <= cnt; i++)
        {
            result = result * r;
        }

        sum = sum + result;
        n = n / 10;
    }

    if (sum == temp)
    {
        printf("amstrong number", temp);
    }
    else
    {
        printf("Not amstrong number");
    }
}
