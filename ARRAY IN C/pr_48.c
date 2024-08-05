// search an element in an array
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,6,9,5,21,4,5,6};
    int p;

    printf("enter the element ");
    scanf("%d",&p);

    for (int  i = 0; i < 10; i++)
    {
        if(p==arr[i])
        {
            printf("Starting from 1,your entered element is at %d\n",i+1);
        }
    }
    
    return 0;
}