#include <stdio.h>
int main()
{
    int n,num=0; 
    printf("enter the nth number ");
    scanf("%d",&n);
   
    while (n!=0)
    {
        num=n+num;
        n-=1;
    }
    printf("the sum of nth number is %d",num);
    
    return 0;
}