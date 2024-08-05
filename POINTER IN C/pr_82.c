// find the lenght of string using pointer
#include <stdio.h>
#include <conio.h>
int main()
{
    char ar[20]="hello", *pt;
    int i=0;
    // gets(ar);
    pt=ar;
    while (*pt !='\0')
    {
        i++;
        pt++;
    }
    
    
    printf("the lenght of string is %d", i);
    return 0;
}
