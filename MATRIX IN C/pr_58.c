// check the matrix is upper triangular or not
#include <stdio.h>
int main()
{
    int i, j, o, temp;
    int ar[10][10];
    printf("enter the numbers of rows or column in matrix ");
    scanf("%d", &o);

    printf("\nenter the matrix elements\n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("ar[%d][%d]=", i, j);
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\nentered matrix elements are \n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }
    int flag = 0;
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            if (i > j)
            {
                if (ar[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("it is not an upper triangular matrix");
    }
    else
    {
        printf("it is a upper triangular matrix");
    }

    return 0;
}
/*
00  01  02
10  11  12
20  21  22*/