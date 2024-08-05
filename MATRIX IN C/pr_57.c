// interchanging diagonal of matrix
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

    j = o - 1;
    for (i = 0; i < o; i++)
    {
        int temp = ar[i][j];
        ar[i][j] = ar[i][i];
        ar[i][i] = temp;
        j--;
    }
    printf("\nafter interchanging matrix elements are \n");
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("%d\t", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}