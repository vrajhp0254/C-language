#include <stdio.h>
int main()
{
    int n,a=2,num=0;
    printf("enter the nth term");
    scanf("%d",&n);
    int t1=0,t2=1;
    printf("%d %d",t1,t2);
    while (a<n)
    {
        num=t1 +t2;
        t1=t2;
        t2=num;
        printf(" %d",num);
        a++;
    }
    
    return 0;
}