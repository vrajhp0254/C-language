#include <iostream>
using namespace std;
int power(int a,int b)
{
    return 3.14*a*b;
}
int power(double a,int b)
{
    return a*b;
}
int main()
{
    cout<<"area of cicle is "<<power(3.14,3);
    cout<<"area of rectangle is "<<power(3,3);

    return 0;

}
