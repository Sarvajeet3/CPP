#include<iostream>
using namespace std;
int n;
int main()
{
    string a="rbja";
    int count=0;
    for(int i=0;i<=(sizeof(a));i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            count++;
        }
    }
     if(count%2!=0)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
}
    
    
