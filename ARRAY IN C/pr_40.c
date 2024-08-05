// print the negative element in array
#include <stdio.h>

int main()
{
    int l[10],k;
    printf("enter the numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&l[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (l[i]<0)
        {
            k=l[i];
        
        printf("%d\n",k);
        }
    }
    return 0;
}