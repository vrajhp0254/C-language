// find the sum of each row and column of a matrix
#include <stdio.h>
int main()
{
    int ar[2][2], s = 0;
    printf("enter the matrix elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ar[%d][%d]=", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    printf("entered the matrix elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    // sum of each rows
    for (int i = 0; i < 2; i++)
    {
        s = 0;
        printf("sum of %d rows is", i + 1);
        for (int j = 0; j < 2; j++)
        {
            s += ar[i][j];
        }
        printf("%d\n", s);
    }
    // sum of each column
    for (int i = 0; i < 2; i++)
    {
        s = 0;
        printf("sum of %d column is", i + 1);
        for (int j = 0; j < 2; j++)
        {
            s += ar[j][i];
        }
        printf("%d\n", s);
    }

    return 0;
}