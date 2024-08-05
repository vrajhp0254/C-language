#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    double r1, r2;

    printf("enter a, b and c where a*x*x + b*x + c =0\n");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d < 0)
    {
        printf("f r=%.2lf + i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
        printf("s r=%.2lf - i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
    }
    else
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r1 = (-b - sqrt(d)) / (2 * a);
        printf("first root = %.2lf\n", r1);
        printf("second root = %.2lf\n", r2);
    }
    return 0;
}