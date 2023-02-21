#include<iostream>
using namespace std;
int fact(int n)
{
    int count=0,facto=1;
     for(int i=1;i<=n;i++)
    {
       facto=facto*i;
    }
    return facto;
}

int main()
{
    int n1,arm=0;
    cin>>n1;
    cout<<fact(n1);
    return 0;
}