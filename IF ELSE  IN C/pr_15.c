#include <stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
     if (n==97 || n==101 || n==105 || n==111 || n==117)
     {
        printf("vowel");
     }
     else
     {
        printf("consonant");
     }
     
    return 0;
}