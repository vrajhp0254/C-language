#include <stdio.h>
int main()
{
    char c;
    scanf("%c",&c);

    if((c>64 && c<89) || (c>=97 && c<=122))
    {
        printf("alphabet");
    }
    
     else
    {
       printf("special character");
    }
    return 0;
}