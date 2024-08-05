// addition using pointer 
#include <stdio.h>
int main()
{
    int a=1,b=2;
    int* p1=&a;
    int* p2=&b;
    printf("%d",*p1+*p2);
    return 0;
}