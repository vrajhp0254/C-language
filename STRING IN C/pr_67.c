// toggle the char case
#include <stdio.h>
int main()
{
    char s[50];
    
    printf("enter the string");
    gets(s);
    for (int i = 0; s[i]; i++)
    {
        if (s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]-=32;
        }
        
    }
    printf("string in togglecase = %s",s);
    
    return 0;
}