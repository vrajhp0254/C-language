#include <stdio.h>
// #include <ctype.h>
#include<string.h>
int isvowel(char);

int main()
{
    char str[100],new[100];
    int i,j;

    printf("enter a string to remove vowels\n");
    gets(str);
    for (i = 0; i < str[i]!='\0'; i++)
    {
        if(isvowel(str[i])==1)
        {
            new[j]=str[i];
            j++;
        }
    }
    new[j]='\0';
    printf("string after removing vowels %s",new);
    return 0;
}
int isvowel(char ch)
{
    switch(ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'O':
        case'U':
        case'I':
        return 0;

        default:
        return 1;
    }
}