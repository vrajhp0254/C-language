// reverse an array using pointer
#include <stdio.h>
int main()
{
    int a;
    printf("enter the length: ");
    scanf("%d",&a);
    int arr[a];
    printf("enter the element or array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (arr + i));
    }
    
    for (int i = 0; i < (5/2); i++)
    {
        *(arr+i)=*(arr+(4-i)) +*(arr+i);
        *(arr+(4-i))=*(arr+i) - *(arr+(4-i));
        *(arr+i)=*(arr+i) - *(arr+(4-i));
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(arr+i));
    }

    return 0;
}