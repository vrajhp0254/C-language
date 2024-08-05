// identity of the matrix
#include <stdio.h>
int main()
{
    int ar[10][10], o, n;
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
            if (ar[i][i] == ar[0][0])
            {
                n = ar[0][0];
            }
            else
            {
                flag = 1;
                break;
            }
            if (i != j)
            {
                if (ar[i][j] != 0)
                {
                    flag = 1;
                }
            }
        }
    }
    if (flag==1)
    {
        printf("it is not a identity matrix");
    }
    else
    {
        printf("it is identity as %dI ",n);
    }
    

    return 0;
}