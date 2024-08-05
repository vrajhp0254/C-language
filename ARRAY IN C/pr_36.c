// delete element from array at desired position
#include <stdio.h>
int main()
{
    int a[10],d;
    printf("enter the elements \n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);

    }

    printf("enter the position of element\n");
    scanf("%d",&d);
    int k=d;
    for (int i = 0; i < 10-k-1; i++)
    {
        a[d]=a[d+1];
        d++;
    }

    for (int i = 0; i < 9; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}