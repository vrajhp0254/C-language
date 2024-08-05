#include <stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("enter the number ");
    scanf("%d",&n);
    int a=n;
    while (n!=0)
    {
         rem = n%10;
         rev=rem +rev*10;
         n=n/10;
    }
    printf("%d\n",rev);
    if (rev==a)
    {
        printf("number is palindrone");
    }
    else
    {
        printf("number is not palindrone");
    }
    
    
    return 0;
}