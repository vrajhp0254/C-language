// remove duplicate items in an array
#include <stdio.h>
#include <string.h>
int main()
{
    int ar[50];
    int i,j,l,k;

    printf("enter the number of element\n");
    scanf("%d",&l);

    printf("enter the element");
    for ( i = 0; i < l; i++)
    {
        scanf("%d",&ar[i]);
    }

    for ( i = 0; i < l-1; i++)
    {
        for ( j = i+1; j < l; j++)
        {
            if (ar[i]==ar[j])
            {
                k=j;
                while(k<(l-1))
                {
                    ar[k]=ar[k+1];
                    k++;
                }
                l--;
                j=i;
            }
            
        }
        
    }
    
    printf("array after the removing duplicate items");

    for ( i = 0; i < l; i++)
    {
        printf("%d",ar[i]);
    }
    
    return 0;
}