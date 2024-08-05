#include <stdio.h>
int main()
{
    float h,b;
     printf("enter the height of the triangle: ");
     scanf("%f",&h);

     printf("enter the base of the triangle: ");
     scanf("%f",&b);

     float area =  ((h*b)/2);
     printf("value of area of the triangle :%f",area);

        return 0;
}