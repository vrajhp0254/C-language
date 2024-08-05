// count the occurrence of element in array
#include <stdio.h>
int main()
{
    int arr[10]={1,2,3,4,3,2,4,1,3,1};
    int len=sizeof(arr)/sizeof(arr[0]);

    int v=-1;
    int f[len];

    for (int i = 0; i < len; i++)
    {
        int c=1;
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                f[j]=v;
            }

        }
        if (f[i]!=v)
        {
            f[i]=c;
        }
    }
    printf("element - frequency\n");
    for (int i = 0; i < len; i++)
    {
        if (f[i]!=v)
        {
            printf("%d -%d\n",arr[i],f[i]);
        }
        
    }
    
    
    return 0;
}