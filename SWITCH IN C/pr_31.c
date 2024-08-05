#include <stdio.h>
int main()
{
    int n,t,r;
    printf("enter the conversion as 1.celsius to fahrenheit and 2. fahrenheit to celsius\n");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        printf("enter the temperature");
        scanf("%d",&t);
        t=(t*9/5)+32;
        printf("temperature in fahrenheit is %d",t);
        break;
    
    case 2:
        printf("enter the temperature");
        scanf("%d",&r);
        r=(r-32) *(5/9) ;
        printf("temperature in fahrenheit is %d",r);
        break;

    default:
        printf("invalid choice");
        break;
    }
    return 0;
}