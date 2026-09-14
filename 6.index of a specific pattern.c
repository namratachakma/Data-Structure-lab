#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], sub[50];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter substring: ");
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        j = 0;

        while (sub[j] != '\0' && str[i + j] == sub[j])
        {
            j++;
        }

        if (sub[j] == '\0')
        {
            printf("Substring found at position %d", i);
            return 0;
        }
    }

    printf("Substring not found");

    return 0;
}
