#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string a= "{({([";
    string b="";
    int size=0;
    int i =0;
    while (a[i] != '\0')   
    {
        
        if(a[i]=='(')
        {
            int c=a[i]+1;
            char j=c;
            b=b+j;
        }
        else
        {
            int c=a[i]+2;
            char j=c;
            b=b+j;
        }
        i++;
        size++;
    }
    cout<<a<<endl;
    for(i=size;i>=0;i--)
    {
        cout<<b[i];
    }
    return 0;
}
