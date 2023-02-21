#include<bits/stdc++.h>
using namespace std;
int main()
{ int summ =0;

int n = 99999998;
while(n>=10)
{
    int sum = 0;
    while(n>0)
    {
        sum = (n%10)+sum;
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum >= 10)
    {
    n=sum;
    }
    else
    {
    summ=sum;
    }
}

// cout<<summ<<endl;
return 0;

}