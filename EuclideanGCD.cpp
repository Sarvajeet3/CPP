#include<bits/stdc++.h>
using namespace std;

int Euclidean(int a, int b)
{
    if(b==0)
    return a;
    return Euclidean(b,a%b);
}



int main()
{
    int a1, b1;
    cin>>a1>>b1;
    cout<<"GCD: "<<Euclidean(a1,b1)<<endl;
    return 0;
}