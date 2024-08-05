// left or right rotate an array by specified position
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int r,l;
     
    printf("enter the position for right rotate ");
    scanf("%d",&r);
   

    for (int i = 0; i < r; i++)
    {
        int a=arr[0];
        for (int i = 0; i < 10; i++)
        {
            if (i==9)
            {
                arr[i]=a;
            }
            else
            {    
            arr[i]=arr[i+1];
            }
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    printf("enter the position for left rotate");
    scanf("%d",&l);
    for (int i = 0; i < l+r; i++)
    {
        int a=arr[9];
        for (int i = 9; i >=0; i--)
        {
            if (i==0)
            {
                arr[0]=a;
            }
            else
            {    
            arr[i]=arr[i-1];
            }
        }
    }
    
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    
    // return 0;
}