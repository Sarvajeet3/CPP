#include<iostream>
using namespace std;

int main()
{
    int row;
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int k=1; k<=row-i;k++)
        cout<<"  ";
        for(int m=i;m>1;m--)
        {
           cout<<m<<" ";
        }
        for(int j=1;j<=i;j++)
        {
           cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}