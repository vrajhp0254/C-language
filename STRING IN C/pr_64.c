// change char-case of string
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("enter the string");
    gets(s);
    printf("string in uppercase is %s",strupr(s));
    // for lower case use strlwr
    return 0;
}