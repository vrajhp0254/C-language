// used all function of header file of string
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]="hello";
    char s2[]="world";
    puts(strcat(s1,s2));
    printf("%d\n",strlen(s1));
    puts(strrev(s2));
    strcpy(s2,"hello");
    puts(s2);
    printf("%d",strcmp(s1,s2));

    return 0;
}