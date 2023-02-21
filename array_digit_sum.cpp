#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={9,9,9}, b[]={1,1,1},c[]={};
    int as=sizeof(a)/4;
    int bs=sizeof(b)/4;
    int numa=0,numb=0;
    for(int i=0;i<as;i++)
    {
        numa=numa+(a[i]*(pow(10,(as-(i+1)))));
    }
    for(int i=0;i<bs;i++)
    {
        numb=numb+(b[i]*(pow(10,(bs-(i+1)))));
    }
    cout<<numa<<" "<<numb<<endl;
    cout<<numa+numb;

return 0;
}