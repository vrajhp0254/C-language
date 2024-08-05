// check string is pallindrone
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[20];
    int i,length;
    int flag=0;
    printf("\n enter a string ");
    scanf("%s",s1);
    length = strlen(s1);
    for ( i = 0; i < length; i++)
    {
        if ((s1[i]!=s1[length-i-1]))
        {
            flag=1;
            break;
        }
        
    }
    if (flag)
    {
        printf("\n%s is not a palindrone",s1);
    }
    else
    {
        printf("\n%s is  a palindrone",s1);
    }

    
    return 0;
}