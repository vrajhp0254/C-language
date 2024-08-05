#include <stdio.h>
int main()
{
    char fname[20],mname[20],lname[20];

    printf("enter the full name: ");
    scanf("%s%s%s",fname,mname,lname);

    printf("abbreviated name: \n");
    printf("%c. %c. %s",fname[0],mname[0],lname);
    return 0;
}