// concatenate two string using pointer
#include <stdio.h>
#include<string.h>
int main()
{
    char str1[20] = "hello", str2[10] = " world";
    strcat(str1,str2);
    printf("%s", str1);
    return 0;
}