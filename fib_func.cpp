#include<iostream>
using namespace std;
void fib(int n)
{
    int count=0,t1=0,t2=1,temp;
     for(int i=1;i<=n;i++)
    {
       cout<<t1<<" ";
       temp=t2;
       t2=t2+t1;
       t1=temp;
    }
    return;
}

int main()
{
    int n1,arm=0;
    cin>>n1;
    fib(n1);
    return 0;
}