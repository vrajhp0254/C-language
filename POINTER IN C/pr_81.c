// accessing two dimensional array using pointer 
#include <stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("arr[%d][%d]=",i,j);
    //         // scanf("%d",((arr+i)+j));cannot run as i for first and j for second, it will run as sum of i and j

    //        the write way is scanf("%d",(*(arr+i)+j));
    //     }
        
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr[%d][%d]=%d\n",i,j,*(*(arr+i)+j));
            
        }
        
    }
    

    return 0;
}