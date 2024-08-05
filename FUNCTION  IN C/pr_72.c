// find the strong number
#include <stdio.h>
void strong(int a)
{
    int y = a;
    int sum = 0, pro = 1;
    for (int i = 0; a != 0; i++)
    {
        int n = a % 10;
        pro=1;
        for (int i = 1; i <= n; i++)
        {
            pro = pro * i;
        }
            printf("%d\n", pro);
        sum = sum + pro;
        a = a / 10;
    }
    if (y == sum)
    {
        printf("number is strong");
    }
    else
    {
        printf("number is not strong");
    }
}
int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d", &n);
    strong(n);

    return 0;
}