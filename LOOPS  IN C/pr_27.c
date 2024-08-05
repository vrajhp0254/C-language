#include <stdio.h>
int main()
{
    int n,num=0;
    printf("enter the number ");
    scanf("%d",&n);

    while (n!=0)
    {
        num=num+1;
        n/=10;
    }
    printf("%d",num);
    
    return 0;
}