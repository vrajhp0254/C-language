// insert an element desired position in an array
#include <stdio.h>
int main()
{
    int a[10],b,c;
    printf("enter the array\n");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the position to insert the number\n");
    scanf("%d",&b);

    printf("enter the value\n");
    scanf("%d",&c);

    printf("array before insertion \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    a[b-1]=c;

    printf("array after insertion \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",a[i]);
    }
    
    return 0;
}