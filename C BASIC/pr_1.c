// area and circumference of a cicle
#include <stdio.h>
int main()
{
    float area,cf,pi=3.14;
    float r;
    printf("enter the value of r: ");
    scanf("%f",&r);

    area=pi*r*r;
    cf=2*pi*r;
    printf("area of cicle is %f and its circumference is %f",area,cf);
    return 0;
}