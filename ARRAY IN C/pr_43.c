// find the maximum and minimum elment in an array
#include <stdio.h>
void min(int arr[],int len,int start);
void max(int arr[],int len,int start);
int main()
{
    int arr[10]={20,-2,3,4,55,6,33,8,9,10};
    printf("the minimum of all the elements is \n");
    min(arr,10,0);
    printf("the maximium of all the elements is \n");
    max(arr,10,0);


    return 0;
}
void min(int arr[],int len,int start)
{
    static int i;
    if (start>=len-1)
    {
        printf("%d\n",arr[i]);
        return;
    }
    
    
    if(start==0)
        i=0;
    if (arr[i]<arr[start+1])
    {
        min( arr, len,start+1);
    }
    else
    {
        i=start+1;
        min( arr, len,start+1);
    }
}
void max(int arr[],int len ,int start)
{
    static int i;
    if (start>=len-1)
    {
        printf("%d\n",arr[i]);
        return;
    }
    
    if(start==0)
        i=0;
    if (arr[i]>arr[start+1])
    {
        max( arr, len,start+1);
    }
    else
    {
        i=start+1;
        max( arr, len,start+1);
    }
}