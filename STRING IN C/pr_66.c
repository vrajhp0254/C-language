// strings are anagram or not
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10], s2[10], c = 0;
    printf("enter the string \n");
    gets(s1);
    gets(s2);

    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 != l2)
    {
        goto label;
    }
    else
    {
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < l2; j++)
            {
                if (s1[i] == s2[j])
                {
                    c++;
                }
            }
        }
    }
label:
    if (c == l1)
    {
        printf("strings are anagram");
    }
    else
    {
        printf("strings are not anagram");
    }

    return 0;
}