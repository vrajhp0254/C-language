#include <stdio.h>
int main()
{
     char c;
    scanf("%c",&c);

    if(c>64 && c<89)  
    {
        printf("uppercase");
    }
    else if(c>=97 && c<=122) 
    {
        printf("lowercase");
    }
    
    else if(c>=48 && c<=57)
    {
       printf("digit");
    }
    else{
        printf("special character");
    }
    return 0;
    
}