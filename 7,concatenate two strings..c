#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    i = 0;

    // Find the end of first string
    while (str1[i] != '\0')
    {
        i++;
    }

    j = 0;

    // Add second string to first string
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}
