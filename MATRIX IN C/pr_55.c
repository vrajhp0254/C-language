// sum of minor(/) and major(\) diagonal elemants
#include <stdio.h>
int main()
{
    int ar[2][2],s1=0,s2=0,j=1;
    printf("enter the matrix elements\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("ar[%d][%d]=",i,j);
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

    // sum of major diagonal elements
    for (int i = 0; i < 2; i++)
    {
        s1+=ar[i][i];
    }
    printf("sum of diagonal is %d",s1);

    // sum of minor diagonal elements
    for (int i = 0; i < 2; i++)
    {
        s2+=ar[i][j];
        j--;
    }
    printf("sum of diagonal is %d",s2);
    

    return 0;
}