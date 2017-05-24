#include<iostream>
#include<string>
#include<string.h>
using namespace std;
template <typename T>
bool member(T* arr, int n,T member)
{
    bool mem =false;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==member)
        {
            mem = true;
        }
    }
    return mem;
}
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
    cout<<member(arr,5,3.3);
    return 0;
}
