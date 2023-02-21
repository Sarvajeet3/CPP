#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ip;
    cin>>ip;
    int ipad[4]={0},i=0,j=0;
    int  mask[4]={0};
    while(ip[i]!='\0')
    {
        if(ip[i]=='.')
        {
            i++;
            j++;
            continue;
        }
        ipad[j]=(ipad[j]*10)+(ip[i]-'0');
        i++;
    }
    int prefix;
    cin>>prefix;
    int l=0,count=7;
    for(int k=0;k<32;k++)
    {
        if(prefix/8>0)
        {
            mask[l]=255;
            l++;
            k+=8;
            prefix=prefix/8;
            continue;
        }
        if(prefix>0)
        {
            mask[l]=mask[l]+pow(2,count);
        }
    }
    return 0;
}