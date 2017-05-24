#include<iostream>
#include<string>
#include<string.h>
using namespace std;

double g(double x)
{
    return x*2;
}
double f(double x)
{
    return x-2;
}
double fmax(double x)
{
    if(f(x)>g(x))
    {
        cout<<"f(x)="<<f(x)<<endl;
        return f(x);
    }
    cout<<"g(x)="<<g(x)<<endl;
    return g(x);
}
template<typename T>
double maxarray(T* arr,int n,double x)
{
    double maxF=0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i](x)<=arr[i+1](x))
        {
            maxF=arr[i+1](x);
        }
    }
    return maxF;
}
int main()
{
    double (*func[2])(double);
    func[0]=fmax;
    func[1]=fmax;
    cout<<maxarray(func,2,1);
    return 0;
}
