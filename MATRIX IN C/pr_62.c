// sparse matrix or not 
#include <stdio.h>
int main()
{
    int ar[10][10], o;
    int flag = 0;
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
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            if (ar[i][j] == 0)
            {
                flag += 1;
            }
        }
    }

    if (flag >= o)
    {
        printf("it is a sparse matrix");
    }
    else
    {
        printf("it is not sparse matrix");
    }

    return 0;
}