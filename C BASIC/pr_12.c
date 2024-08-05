#include <stdio.h>
int main()
{
    int a,b,c;

    printf("enter the values: ");
    scanf("%d %d",&a,&b);

    c=((a>b)?a:b);
    for (int i = 2; i <= c ; i++)
    {
       
        if (a%i==0 && b%i==0)
        {
            printf("GCD of this values is %d",i);
            break;
        }
        else if (i==c)
        {
            printf("GCD of this values  is 1");
        }
        
    }
    
    return 0;
}