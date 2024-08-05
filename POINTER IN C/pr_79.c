// copy an array to another array using pointer
#include <stdio.h>
int main()
{
    int arr[5],brr[5];
    printf("enter the element of array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",arr+i);
    }
    for (int i = 0; i < 5; i++)
    {
        *(brr+i)=*(arr+i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(brr+i));
    }
    return 0;
}