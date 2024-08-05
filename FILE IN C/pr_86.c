// basic file handling content
#include <stdio.h>
int main()
{
    FILE *ptr ;
    ptr = fopen("file.txt", "r");
    char c = fgetc(ptr);
    printf("the character is %c\n", c);
    c = fgetc(ptr);
    printf("the character is %c\n", c);

    // char ar[10];
    // fgets(ar, 9, ptr);
    // printf("the string is %s", ar);

    // fputc('o',ptr);
    // fputs("he fri",ptr);

    fclose(ptr);
    return 0;
}