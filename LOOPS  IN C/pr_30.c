#include <stdio.h>
int main()
{
    int ar[10],n=10,b,a;
    printf("enter the random numbers \n");
    for(int i=0; i<10;i++)
    {
        scanf("%d",&ar[i]);
    }

    for ( a = 0; a < n; a++)
    {
        for ( b = 0; b < n-a-1; b++)
        {
            if (ar[b]>ar[b+1])
            {
                int temp=ar[b+1];
                ar[b+1]=ar[b];
                ar[b]=temp;


            }
            
        }
        
    }
    printf("after sorting");
    for (int y = 0; y < 10; y++)
    {
        printf("%d\n",ar[y]);
    }
    
    
    return 0;
}