#include <stdio.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutation(char str[], int start, int end)
{
    int i;

    if (start == end)
    {
        printf("%s\n", str);
        return;
    }

    for (i = start; i <= end; i++)
    {
        swap(&str[start], &str[i]);

        permutation(str, start + 1, end);

        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[20];

    printf("Enter elements: ");
    scanf("%s", str);

    printf("All permutations are:\n");

    permutation(str, 0, 3);

    return 0;
}s
