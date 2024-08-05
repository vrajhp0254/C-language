// trim white space from a given string
#include <stdio.h>
int main()
{
    char st[] = "     patel vraj  ";
    char st1[100];

    int ind = 0, a = 0;
    while (st[ind] == ' ' || st[ind] == '\t' || st[ind] == '\n')
    {
        ind++;
    }
    for (int j = ind; st[j] != '\0'; j++)
    {
        st1[a] = st[j];
        a++;
    }
    st1[a]='\0';
    printf("%s", st1);

    return 0;
}