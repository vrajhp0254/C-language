// sort an array in ascending or descending order
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,78,9,10,4};

    printf("array in acsending order \n");

    for (int  i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i]>arr[j])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;

            }
            
        }
        
    }
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("array in descending order \n");

    for (int  i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (arr[i]<arr[j])
            {
                int t=arr[j];
                arr[j]=arr[i];
                arr[i]=t;

            }
            
        }
        
    }
    for (int  i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
    return 0;
}