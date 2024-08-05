// swapp using pointer 
#include <stdio.h>
int main()
{
    int a=1,b=2;
    int* p1=&a;
    int* p2=&b;
    printf("before swapping a=%d and b=%d\n",*p1,*p2);
    *p1=*p2+*p1;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("after swapping a=%d and b=%d",*p1,*p2);
    return 0;
}