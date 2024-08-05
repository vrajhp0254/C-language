// get the odd and even elements numbers
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},e=0,o=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]%2==0)
        {
            e+=1;
        }
        else
        {
            o+=1;
        }
        
    }
    printf("total numbers of even elements is %d\n",e);
    printf("total numbers if odd element is %d",o);
    
    return 0;
}