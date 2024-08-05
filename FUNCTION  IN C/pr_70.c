// vheck the number is armstrong or prime or perfect or not 
#include <stdio.h>
void prime(int a)
{
    int flag = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("it is not a prime number\n");
    }
    else
    {
        printf("it is a prime number\n");
    }
}
void armstrong(int a)
{
int y=a,num=0,rem;
    while (a!=0)
    {
        rem= a%10;
        num= rem*rem*rem +num;
        a=a/10;
    }
        
    if(num==y)
    {
        printf("nummber is armstrong\n");
    }
    else
    {
        printf("number is not armstrong\n");
    }
}
void perfect(int a);
int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d", &a);
    prime(a);
    armstrong(a);
    perfect(a);
    return 0;
}
void perfect(int a)
{
    int y=a,num=0;
    for (int i = 1; i < a; i++)
    {
        if (a%i==0)
        {
            num+=i;
        }
        
    }
    if(num==y)
    {
        printf("it is a perfect number\n");
    }
    else
    {
        printf("it is not a perfect number\n");
    }
    
}