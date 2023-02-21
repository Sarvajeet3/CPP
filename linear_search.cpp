#include<iostream>
using namespace std;
int n;
void linearsearch(int a1[], int k1)
{
     for(int i=0;i<n;i++)
    {
        if(a1[i]==k1)
        {
            cout<<k1<<" is At Index "<<i+1;
            break;
        }
    }
    cout<<"Element Not found";
    return;
}
int main()
{
    int k;
    cout<<"Enter size of array:";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter key:";
    cin>>k;
    linearsearch(a,k);
    return 0;
}