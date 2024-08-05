// read numbers from a file and write numbers to seperate file as they are even ,odd ,prime 
#include <stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("number.txt","w");
    fputs("123456789",ptr); 
    putw(1,ptr);
    // int n=getw(ptr);
    // printf("entered is %d",n);
    fclose(ptr);
    return 0;
}