#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, x1, x2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1 = %.2f\n", x1);
        printf("Root 2 = %.2f\n", x2);
    }
    else if (d == 0)
    {
        x1 = -b / (2 * a);

        printf("Both roots = %.2f\n", x1);
    }
    else
    {
        printf("No real roots");
    }

    return 0;
}
