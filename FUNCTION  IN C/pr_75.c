// LCM of two numbers using recursion 
#include <stdio.h>
int lcm(int a, int b)
{
     static int c=-1;
    // printf("%d\n",c);
    if(c==-1)
    {c=(a>b?a:b);}
    if(c%a==0 && c%b==0)
    {
        return c;
    }
    c++;
    lcm(a,b);
}
int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("lcm of %d and %d is %d",a,b,lcm(a,b));
    
    return 0;
}