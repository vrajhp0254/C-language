// convert all input string into *
#include <stdio.h>
int main()
{
    char a[50];
    char b='*';
    int c;
    printf("enter the lenght of string\n");
    scanf("%d",&c);

    printf("enter the string\n");
    for (int i = 0; i < c; i++)
    {
        scanf("%c",&a[i]);
    }
    printf("press the enter to procced further\n");
    for (int i = 0; i < c; i++)
    {
        a[i]=b;
        printf("%c",a[i]);
    }
    
    

    return 0;
}