#include<iostream>
using namespace std;

int addn(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n1;
    cout<<"Enter a Natural Number:";
    cin>>n1;
    cout<<addn(n1);
    return 0;
}