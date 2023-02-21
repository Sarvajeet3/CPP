#include<iostream>
using namespace std;
int n;
int main()
{
    int a[]={5, 1, 22, 25, 6, 10};
    int b[]={1, 6, 10};
    int b1=0;
    int currenta=0;
    for(int j=0;j<=(sizeof(b)/4);j++)
    {
     for(int i=currenta; i<=(sizeof(a)/4);i++)
     {
        if(a[i]==b[j])
        {
            currenta=i;
            b1++;
            continue;
        }
     }
    }


    if(b1==(sizeof(b)/4))
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
    
