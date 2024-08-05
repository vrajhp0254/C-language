#include <stdio.h>
int main()
{
    int n;
    printf("enter the amount");
    scanf("%d",&n);

    int c=n%100;
    int n100=n/100;

    printf("no of notes of 100 is %d\n",n100);
     n100=c/50;
     c=c%50;
    
    printf("no of notes of 50 is %d\n",n100);
     n100=c/20;
     c=c%20;
    
    printf("no of notes of 20 is %d\n",n100);
     n100=c/10;
     c=c%10;
    
    printf("no of notes of 10 is %d\n",n100);
     n100=c/5;
     c=c%5;
    
    printf("no of notes of 5 is %d\n",n100);
     n100=c;
     
    
    printf("no of notes of 1 is %d\n",n100);
    



    return 0;
}