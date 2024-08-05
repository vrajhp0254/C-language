// print "i am idiot" on any input
#include <stdio.h>
#include <conio.h>
int main()
{
    char ch[]="I AM idiot.";
    char c='w';
    int i=0;

    printf("write your name\n");
    while (c)
    {
        c=getch();
        printf("%c",ch[i]);
        i++;
        if(i==14)
        {
            printf(" ");
            i=0;
        }
    }
    
    return 0;
}