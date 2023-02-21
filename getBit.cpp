#include<iostream>
using namespace std;
void print(int n)
{
    while(n!=0)
    {
        cout<<(n%2);
        n=n/2;
    }
}
int clearSet(int n,int pos)
{
    n=(n|(1<<pos));
    return(n^(1<<pos));
}
int getBit(int n ,int pos)
{
    return ((n & (1<<pos))!=0);
}
int main()
{
    print(32);
    //cout<<clearSet(5,2);
   // cout<<getBit(32,1);
    return 0;
}