#include <stdio.h>
int main()
{
    int a,b,c; 
    printf("enter the angles of triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180)
   { if (a==90 || b==90 || c==90)
    {
        printf("triangle is equilateral");
    }
    if (a<90 && b<90 && c<90)
    {
        printf("triangle is isosceles");
    }
    if (a>90 || b>90 || c>90)
    {
        printf("triangle is scalene");
    }}
    else{
        printf("enter angles are invalid triangle");
    }
    return 0;
}