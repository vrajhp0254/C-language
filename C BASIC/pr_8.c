#include <stdio.h>
int main()
{
    float c,f;

    printf("enter the value of temperature in celsius: ");
    scanf("%f",&c);

    f= c*(9/5) +32;
    printf("value of temperature in fahrenheit is %10.5f",f);
    return 0;
}