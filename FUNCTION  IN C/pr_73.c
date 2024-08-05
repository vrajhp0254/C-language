// printing the fibonacci series to nth term with recursion and without recursion
#include <stdio.h>
// void display(int n)
// {
//     int a=0,b=1,c=0;
//     for (int i = 1; i < n; i++)
//     {
//         c=a+b;
//         printf("%d\n",c);
//         if(i%2!=0)
//         {
//             a=c;
//         }
//         if(i%2==0)
//         {
//             b=c;
//         }
//     }

// }
int display(int n)
{
    static int a = 0, b = 1, c = 1, d = 0;
    d = a + b;
    printf("%d\n", d);
    if (c % 2 != 0)
    {
        a = d;
    }
    if (c % 2 == 0)
    {
        b = d;
    }
    // printf("a=%d b=%d",a,b);
    c++;
    if(c==n)
    {
        return 0;
    }
    display(n);
}
int main()
{
    int n;
    printf("enter the nth term\n");
    scanf("%d", &n);
    printf("fibonacci series with nth term is \n");
    display(n);

    return 0;
}