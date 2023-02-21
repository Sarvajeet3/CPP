#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=0;
    if(n<=0)
    {
        cout<<"bsdk dhung ka number dal :) ";
        return 0;
    }
    // for(; m<5 ;)
    while(m<5)
    {   
        if(n%4==0)
        {
            if(n%100==0)
            {
                if(n%400==0)
                {
                    cout<<n<<endl;
                    
                    m++;
                }
            }
            else
            {
                cout<<n<<endl;
                
                m++;
            }
            n=n+4;
        }
        else
        n++;
    }
    
    return 0;
}