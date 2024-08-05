#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers for operation");
    scanf("%d \n %d",&a,&b);
    int n;
    printf("enter the choice as 1.+ 2.- 3./ 4.* and 5.% ");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("%d",a+b);
        break;
    
    case 2:
        printf("%d",a-b);
        break;
    
    case 3:
        printf("%d",a/b);
        break;
    
    case 4:
        printf("%d",a*b);
        break;
    
    case 5:
        printf("%d",a%b);
        break;
    
    default:
        printf("invalid choice");
        break;
    }
        return 0;
}