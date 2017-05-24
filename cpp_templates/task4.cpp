#include<iostream>
#include<string>
#include<string.h>
using namespace std;
double p1(double a)
{
    return a+1;
}
double p2(double a)
{
    return a+2;
}
double p3(double a)
{
    return a+3;
}
double p4(double a)
{
    return a+4;
}
double p5(double a)
{
    return a+5;
}
int main()
{
    double (* funcs[5])(double);
    funcs[0]=p1;
    cout<<funcs[0](1.1)<<endl;
    funcs[1]=p2;
    cout<<funcs[1](1.1)<<endl;
    funcs[2]=p3;
    cout<<funcs[2](1.1)<<endl;
    funcs[3]=p4;
    cout<<funcs[3](1.1)<<endl;
    funcs[4]=p5;
    cout<<funcs[4](1.1)<<endl;
    return 0;
}
