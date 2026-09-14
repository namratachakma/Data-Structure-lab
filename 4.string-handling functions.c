#include <stdio.h>

char GETCHAR(char str[], int n)
{
    return str[n];
}

void PUTCHAR(char str[], int n, char c)
{
    str[n] = c;
}

int LENGTH(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int POS(char str1[], char str2[])
{
    int i, j;

    for (i = 0; str1[i] != '\0'; i++)
    {
        j = 0;

        while (str1[i + j] == str2[j] && str2[j] != '\0')
        {
            j++;
        }

        if (str2[j] == '\0')
            return i;
    }

    return -1;
}

void CONCAT(char str1[], char str2[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
        i++;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';
}

void SUBSTRING(char str1[], int i, int m, char result[])
{
    int j;

    for (j = 0; j < m; j++)
    {
        result[j] = str1[i + j];
    }

    result[j] = '\0';
}

void DELETE(char str[], int i, int m)
{
    int j;

    for (j = i; str[j + m] != '\0'; j++)
    {
        str[j] = str[j + m];
    }

    str[j] = '\0';
}

void INSERT(char str1[], char str2[], int i)
{
    int j, k;
    char temp[100];

    for (j = 0; str1[i + j] != '\0'; j++)
    {
        temp[j] = str1[i + j];
    }

    temp[j] = '\0';

    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i + j] = str2[j];
    }

    k = 0;

    while (temp[k] != '\0')
    {
        str1[i + j] = temp[k];
        i++;
        j++;
        k++;
    }

    str1[i + j] = '\0';
}

int COMPARE(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }

    return str1[i] - str2[i];
}

int main()
{
    char str1[100], str2[100], result[100];
    char c;
    int n, i, m;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nLength = %d", LENGTH(str1));

    printf("\nEnter position: ");
    scanf("%d", &n);

    printf("Character = %c", GETCHAR(str1, n));

    printf("\nEnter position and character: ");
    scanf("%d %c", &n, &c);

    PUTCHAR(str1, n, c);
    printf("New string = %s", str1);

    printf("\nPosition = %d", POS(str1, str2));

    CONCAT(str1, str2);
    printf("\nConcatenated = %s", str1);

    printf("\nEnter position and length: ");
    scanf("%d %d", &i, &m);

    SUBSTRING(str1, i, m, result);
    printf("Substring = %s", result);

    printf("\nEnter position and number to delete: ");
    scanf("%d %d", &i, &m);

    DELETE(str1, i, m);
    printf("After delete = %s", str1);

    printf("\nEnter position to insert: ");
    scanf("%d", &i);

    INSERT(str1, str2, i);
    printf("After insert = %s", str1);

    printf("\nCompare = %d", COMPARE(str1, str2));

    return 0;
}
