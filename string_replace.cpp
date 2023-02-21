#include<iostream>
using namespace std;
int n;
void refFunc(string a1, int i1)
{
    int count=1;
   string curr="";
   string Final="";
   
   for(int j=0;j<i1;j++)
   {
    if(j==i1-1)
   {
    if(j%2==0)
    {
        Final=Final+".abc";
        break;
    }
    else
    {
    curr=curr+a1[j];
    Final=Final+curr;
    cout<<count;
    break;
    }
   }
    if(a1[j]=='.')
    {
        count++;
        if(count%2==0)
        {
            Final=Final+curr;
            curr="";
        }
        else{
            Final=Final+".abc.";
            curr="";
        }
    }
    else
    {
        curr=curr+a1[j];
    }
    
   }
   cout<<Final;
}
int main()
{
    string a ="i.like.this.program.very.much";
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    refFunc(a,i);
}