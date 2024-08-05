// input and print array using pointer 
#include <stdio.h>
int main()
{
    int arr[5];
    printf("enter the element: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",arr+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(arr+i));
    }

    
    return 0;
}