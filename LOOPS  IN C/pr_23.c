#include <stdio.h>
int main()
{
    int a,rem,num=0;
    printf("enter the three digits number ");
    scanf("%d",&a);
    int y=a;
    while (a!=0)
    {
        rem= a%10;
        num= rem*rem*rem +num;
        a=a/10;
    }
        printf("%d\n",num);
    if(num==y)
    {
        printf("nummber is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
    
    return 0;
}