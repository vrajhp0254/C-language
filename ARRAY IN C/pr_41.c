// read and print array using recurssion
#include <stdio.h>
void read(int arr[],int start ,int len);
int main()
{
    int arr[50],n,i;

    printf("enter the lenght of the array\n");
    scanf("%d",&n);
    printf("enter  the element of array\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("elements in the array:\n");
    read(arr,0,n);
    
    return 0;
}
void read(int arr[],int start, int len)
{
    if (start >= len)
    {
        return;
    }
    printf("%d\n",arr[start]);
    read(arr,start+1,len);
}