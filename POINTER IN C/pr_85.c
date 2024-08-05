// return values from function using pointers 
#include <stdio.h>
void pointer(int *a){
    *a=*a*2;
}

int main()
{
    int a=1,*b;
    b=&a;
    pointer(b);
    printf("%d\n",*b);
    pointer(b);
    printf("%d\n",*b);
    pointer(b);
    printf("%d\n",*b);
    return 0;
}