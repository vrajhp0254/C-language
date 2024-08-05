// add two matrix
#include <stdio.h>
int main()
{
    int ar[3][3], br[3][3];
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

    int c[3][3];
    printf("sum of two matrix is \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = ar[i][j] + br[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}