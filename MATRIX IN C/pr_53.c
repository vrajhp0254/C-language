// multiplication of matrix
#include <stdio.h>
int main()
{
    int ar[3][3], br[3][3], cr[3][3];
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
    printf("enter the matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("br[%d][%d]=", i, j);
            scanf("%d", &br[i][j]);
        }
    }
    printf("your entered matrix is \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", br[i][j]);
        }
        printf("\n");
    }

    printf("result of multiplication \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cr[i][j]=0;
            for (int k = 0; k < 3; k++)
            {
                cr[i][j] += ar[i][k] * br[k][j];
            }
            printf("%d\t", cr[i][j]);
        }
        printf("\n");
    }

    return 0;
}