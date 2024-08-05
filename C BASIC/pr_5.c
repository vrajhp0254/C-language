#include <stdio.h>
int main()
{
    float p,r,t,s;

    printf("enter the principal amount, rate of interest and time\n");
    scanf("%f %f %f",&p,&r,&t);

    s= (p*r*t)/100;
    printf("simple interest: %f ",s);
    return 0;
}