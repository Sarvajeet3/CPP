#include<iostream>
using namespace std;

int toBinary(int n1)
{
    int num=0,x=1;
    while(n1>0)
    {
        num=(x*(n1%2))+num;
        n1/=2;
        x=x*10;
    }
    return num;
}
int toOctal(int n1)
{
    int num=0,x=1;
    while(n1>0)
    {
        num=(x*(n1%8))+num;
        n1/=8;
        x=x*10;
    }
    return num;
}
int toHexa(int n1)
{
    int num=0,x=1;
    while(n1>0)
    {
        num=(x*(n1%16))+num;
        n1/=16;
        x=x*10;
    }
    return num;
}
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<toBinary(n)<<endl;
    cout<<toOctal(n)<<endl;
    cout<<toHexa(n);
    return 0;
}