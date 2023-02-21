#include<bits/stdc++.h>
using namespace std;

string findSum(string X, string Y) {
        string Z="";
        int xsize=X.size(), ysize=Y.size(),flag=0,msize=0;
        if(xsize>=ysize)
        {
            msize=xsize;
       for(int i=0;i<xsize;i++)
       {
           if(((ysize)-i)<=0)
           {
                int a=(X[xsize-(i+1)]-'0');
                int c=a+flag;
                if(c<10)
                {
                    Z+=(to_string(c));
                    flag=0;
                }
                else
                {
                   c=c-10;
                   Z+=(to_string(c));
                   flag=1;
                }
                continue;
           }
           
           int a=(X[xsize-(i+1)]-'0');
           int b=(Y[ysize-(i+1)]-'0');
           int c=a+b+flag;
           if(c<10)
           {
               Z+=(to_string(c));
               flag=0;
           }
           else
           {
               c=c-10;
               Z+=(to_string(c));
               flag=1;
           }
        }
        }
        else
        {
        for(signed int i=0;i<ysize;i++)
        {
            msize=ysize;
           if(((xsize)-i)<=0)
           {
                int a=(Y[ysize-(i+1)]-'0');
                int c=a+flag;
                if(c<10)
                {
                    Z+=(to_string(c));
                    flag=0;
                }
                else
                {
                   c=c-10;
                   Z+=(to_string(c));
                   flag=1;
                }
                continue;
           }
           
           int a=(X[xsize-(i+1)]-'0');
           int b=(Y[ysize-(i+1)]-'0');
           int c=a+b+flag;
           if(c<10)
           {
               Z+=(to_string(c));
               flag=0;
           }
           else
           {
               c=c-10;
               Z+=(to_string(c));
               flag=1;
           }
        }
        }
        if(flag==1)
        {
            Z+=(to_string(flag));
        }
        reverse(Z.begin(),Z.end());
        
        int count;
       for(count=0;count<msize;count++)
       {
           if((Z[count]-'0')>0)
           {   
               break;
           }
       }
       if(count==msize)
       {
           string S="0";
           return S;
       }
       string S=Z.substr(count);
       
       return S;
    }

int main()
{
    string a="00000",b="000000";
    cout<<findSum(a,b);
    return 0;
}