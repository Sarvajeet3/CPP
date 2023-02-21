#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a;
        }
        else if(a==c)
        {
            cout<<a<<" "<<c;
        }
        else{
            cout<<c;
        }
    }
    else if (b>a){
        if(b>c)
        {
            cout<<b;
        }
        else if(b==c)
        {
            cout<<b<<" "<<c;
        }
        else{
            cout<<c;
        }
    }
    else
    {
        if(a>c)
        {
            cout<<a<<" "<<b;
        }
        else if(a==c)
        {
            cout<<a<<" "<<c<<" "<<b;
        }
        else{
            cout<<c;
        }
    }
    return 0;
}