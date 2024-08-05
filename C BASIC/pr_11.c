#include <stdio.h>
int main()
{
    int a,b,num=1;
    
    printf("enter the values:");
    scanf("%d %d",&a,&b);

    while(1)
    {
        if (num%a==0 && num%b==0)
        {
            printf("LCM of a and b is:%d",num);
            break;
        }
        ++num;
    }
    

    return 0;
}