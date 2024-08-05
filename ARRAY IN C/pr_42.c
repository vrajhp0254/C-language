// sum of all elements in the array
#include <stdio.h>
void sum(int start,int arr[]);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    
    printf("the sum of all elements");
    sum(0,arr);
    return 0;
}
void sum( int start,int arr[])
{
    static int sem;
    if (start==0)
    {
        sem=0;
    }
    
    if (start>=10)
    {
        printf("%d",sem);
        return;
    }
    printf("start is %d\n %d\n",start,sem);
    sem=arr[start] +sem;
    sum(start + 1,arr);
}