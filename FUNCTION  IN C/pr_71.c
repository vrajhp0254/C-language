// find the value of number having power 
#include <stdio.h>
int power(int a,int b)
{
    // printf("%d",a);
    static int c=1;
    static int p=1;
    p=p*a;
    // printf("%d",c);
    if (c==b)
    {
        return p;
    }
    c++;
    
    power(a,b);
}
int main()
{
     int b;
    int a;
    printf("enter the number and the power\n");
    scanf("%d %d",&a,&b);
    int c=power(a,b);
    printf("%d",c);
    return 0;
}