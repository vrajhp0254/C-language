// check the symmetricity of matrix 
#include <stdio.h>
int main()
{
    int ar[10][10], o;
    int tr[10][10], flag = 0;
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
        for (int j = 0; j < o; j++)
        {
            tr[j][i] = ar[i][j];
        }

    printf("transpose of amatrix is \n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", tr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            if (tr[i][j] != ar[i][j])
            {
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("it is symmetric matrix");
    }
    else
    {
        printf("it is not symmetric matrix");
    }

    return 0;
}