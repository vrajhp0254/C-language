// get the second largest in an array
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,70,80,9,10},k=arr[0],b;
    for (int j = 1; j < 3; j++)
    {
        for (int i = 1; i < 10; i++)
        {
            // printf("%d\n",k);
            if(k<arr[i])
            {
                k=arr[i];
                b=i;
                // printf("%d\n",k);
            }
        }
        arr[b]=0;
        if (j==1)
        {
            k=0;
        }
        
        // printf("%d\n",k);
    }
    printf("%d",k);
    
    return 0;
}