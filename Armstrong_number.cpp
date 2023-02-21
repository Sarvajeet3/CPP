#include<iostream>
using namespace std;

int main()
{
    int n,arm=0;
    cin>>n;
    int num=n;
    while(n>0)
    {
        int cur=(n%10);
        cur=cur*cur*cur;
        arm=arm+cur;
        n=n/10;
    }
    if(arm==num)
    {
        cout<<"Number is Armstrong";
    }
    else
    {
        cout<<"Number is Not a Armstrong";
    }
    return 0;
}