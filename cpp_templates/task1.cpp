#include<iostream>
#include<string>
#include<string.h>
using namespace std;
template <typename T>
void input(T arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
template <typename T>
void printArr(T arr, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    double arr[5];
    input(arr,5);
    printArr(arr,5);
    return 0;
}

