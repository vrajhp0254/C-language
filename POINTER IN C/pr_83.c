// copy one string to another using pointer
#include <stdio.h>
#include <string.h>
int main()
{
    char *str2 = "hello war",*str1="u";
        str1 = str2;
    
    // memcpy(ct,pt,strlen(pt));
    
    printf("entered string is %s",str1);
    return 0;
}