#include <stdio.h>
int main()
{
    int n,a;
    printf("enter the amount you invest ");
    scanf("%d",&n);

    printf("enter the amount you get");
    scanf("%d",&a);
     if (n<a)
     {
        printf("you are in profit");
     }
     else{
        printf("you are in loss");
     }
     
    return 0;
}