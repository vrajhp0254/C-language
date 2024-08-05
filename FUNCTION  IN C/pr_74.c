// finding HCF of two numbers using recussion
#include <stdio.h>
int hcf(int a, int b)
{
    static int c=-1;
    // printf("%d\n",c);
    if(c==-1)
    {c=(a<b?a:b);}
    if(a%c==0 && b%c==0)
    {
        return c;
    }
    c--;
    hcf(a,b);
    
}
int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    printf("hcf of %d and %d is %d",a,b,hcf(a,b));
    
    return 0;
}