#include <stdio.h>
int main()
{
    unsigned long long int fact=1;
    int n;
    
    printf("enter the number:");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("value of factorial:%llu",fact);
    
    return 0;
}