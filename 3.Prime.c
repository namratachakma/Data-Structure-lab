#include <stdio.h>

int main()
{
    int n, i, j;
    int prime[100];

    printf("Enter the limit: ");
    scanf("%d", &n);

    // Assume all numbers are prime
    for (i = 0; i <= n; i++)
        prime[i] = 1;

    // Remove multiples of each prime number
    for (i = 2; i * i <= n; i++)
    {
        if (prime[i] == 1)
        {
            for (j = i * i; j <= n; j = j + i)
                prime[j] = 0;
        }
    }

    printf("Prime numbers are:\n");

    for (i = 2; i <= n; i++)
    {
        if (prime[i] == 1)
            printf("%d ", i);
    }

    return 0;
}
