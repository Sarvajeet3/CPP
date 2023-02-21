#include<iostream>
using namespace std;
int n;
void refFunc(string a1)
{
   string curr="";
   string Final="";
   cout<<(sizeof(a1));
}
int main()
{
    string a ="i.like.this.program.very.much";
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    cout<<i;
    cout<<sizeof(a);
    refFunc(a);
}