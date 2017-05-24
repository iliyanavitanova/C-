#include<iostream>
#include<string>
#include<string.h>
using namespace std;
struct S
{
    int a;
    int b;
    int c;
};
void initS(S s)
{
    cout<<"a=";
    cin>>s.a;
    cout<<"b=";
    cin>>s.b;
    cout<<"c=";
    cin>>s.c;
}
void swapS(S &s1,S &s2)
{
    S temp=s1;
    s1=s2;
    s2=temp;
}
bool compA(S s1,S s2)
{
    S temp;
    if(s1.a>s2.a)
    {
        return false;
    }
    return true;
}
void printS(S s)
{
    cout<<"a="<<s.a<<" b="<<s.b<<" c="<<s.c;
}
void printArr(S arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"a="<<arr[i].a<<" b="<<arr[i].b<<" c="<<arr[i].c;
    }
}
void sortArr(S* arr,int n, bool(*compare)(S,S))
{
    for(int i=0; i<n-1; i++)
    {
        if(compare(arr[i],arr[i+1]))
        {
            swapS(arr[i],arr[i+1]);
        }
    }

    printArr(arr,n);
}


int main()
{
    S arr[5];
    for(int i=0; i<5; i++)
    {
        initS(arr[0]);
    }
    sortArr(arr,5,compA);
    return 0;
}
