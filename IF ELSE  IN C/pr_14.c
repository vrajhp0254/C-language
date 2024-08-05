#include <stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);

    if (n>=0)
    {
        printf("number is positive");
    }
    else
    {
        printf("number is negative");
    }
    
    return 0;
}