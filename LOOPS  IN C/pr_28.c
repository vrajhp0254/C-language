#include <stdio.h>
int main()
{
    long int n;
    int a=1,c,num=0,y;
    printf("enter the number ");
    scanf("%ld",&n);
    while (a!=0)
    {      num=0;
          if (n==0)
        {
            n=y;
        }
        
        while (n!=0)
        {
            c=n%10;
            num=num+c;
            n/=10;
        }
        y=num;
        a=num/10;
    }
    printf("generic root of n is %d",num);
    
    
    return 0;
}