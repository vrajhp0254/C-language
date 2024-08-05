#include <stdio.h>
int main()
{
    int n,reverse=0,rem;
    printf("enter the number ");
    scanf("%d",&n);

    // int c= n/100;
    // int a=n%100;

    // int b= a/10;
    // int s=a%10;

    // int d=s*100 + b*10 + c;
    // printf("%d",d);
    while ( n!=0)
    {
         rem =n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    printf("%d",reverse);

    return 0;
}