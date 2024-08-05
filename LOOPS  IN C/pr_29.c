#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int a=1;
    while (a!=11)
    {
        printf("%d * %d = %d\n",n,a,n*a);
        a++;
    }
    
    return 0;
}