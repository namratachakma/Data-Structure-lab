#include <stdio.h>

int main()
{
    char str[100];
    int pos, n, i;

    printf("Enter the string: ");
    scanf("%s", str);

    printf("Enter position: ");
    scanf("%d", &pos);

    printf("Enter number of characters to delete: ");
    scanf("%d", &n);

    /* Move characters to the left */
    for (i = pos; str[i + n] != '\0'; i++)
    {
        str[i] = str[i + n];
    }

    str[i] = '\0';

    printf("After deletion = %s", str);

    return 0;
}
