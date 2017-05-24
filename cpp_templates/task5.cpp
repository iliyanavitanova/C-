#include<iostream>
#include<string>
#include<string.h>
using namespace std;
template<typename T>
double fmax(T f, T g, double x)
{
    if(f(x)>g(x))
    {
        cout<<"f(x)=";
        return f(x);
    }
    cout<<"g(x)=";
    return g(x);
}
double g(double x)
{
    return x*2;
}
double f(double x)
{
    return x*20;
}
int main()
{
    double (* func[2])(double);
    func[0]=f;
    func[1]=g;
    cout<<fmax(func[0],func[1],2.2);
    return 0;
}
