// string is palindrone or not
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10], flag = 0;
    printf("enter the string \n");
    gets(s);
    int p;
    p = strlen(s);
    printf("%d",p);
    int j = p - 1;
    for (int i = 0; i < p; i++)
    {
        
        printf("%c %c\n",s[i],s[j]);
        if (s[i] != s[j])
        {
            flag = 1;
        }
        j--;
    }

    if (flag == 1)
    {
        printf("string is not palindrome");
    }
    else
    {
        printf("sting is palindrone");
    }
    return 0;
}