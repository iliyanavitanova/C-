#include<iostream>
#include<string>
#include<string.h>
using namespace std;
void maP(double arr[], int n,double(*f)(double))
{
    for(int i=0; i<n; i++)
    {
        arr[i]=f(arr[i]);
    }
}
void print(double arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
double inc(double a)
{
    return a+1;
}
int main()
{
    double arr[3]= {1.1,2,3};
    maP(arr,3,inc);
    print(arr,3);
    return 0;
}
