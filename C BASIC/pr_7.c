#include <stdio.h>
int main()
{
    float m,e,h,g,s;
    float per;

    printf("enter the marks of subject: ");
    scanf("%f %f %f %f %f",&m,&e,&h,&g,&s);

    per=(m+e+h+g+s)/5;
    printf("%f",per);

    return 0;
}