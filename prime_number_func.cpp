#include<iostream>
using namespace std;
void prime(int n)
{
    int count=0;
     for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        count++;
        break;
        }
    }
    if(count==0)
    {
        cout<<n<<" is prime";
    }
    else
    {
        cout<<n<<" is non-prime";
    }
    return;
}

int main()
{
    int n1,arm=0;
    cin>>n1;
    prime(n1);
    return 0;
}