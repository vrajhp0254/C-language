// perform scalar multiplication
#include <stdio.h>
int main()
{
    int ar[3][3];
     printf("enter the matrix \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ar[%d][%d]=", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    printf("your entered matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    printf("matrix after the multiplication \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ar[i][j]=3*ar[i][j];
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}