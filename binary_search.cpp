#include<iostream>
using namespace std;
int n;
void binarysearch(int a1[], int k1,int s1, int e1)
{
     int n2=int(((s1+e1)/2));
     if (a1[n2]>k1)
        {
            binarysearch(a1,k1,s1,n2);
        }
    else if(a1[n2]<k1)
        {
            binarysearch(a1,k1,n2,e1);
        }
    else if(a1[n2]==k1)
        {
            cout<<"Elements is At Index: "<<n2+1;
        }
        if(n2==e1 && a1[n2]!=k1)
        cout<<"Element not Found!!";
        exit;
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
    if(a[n-1]==k)
    cout<<"Elements is At Index: "<<n;
    else
    binarysearch(a,k,0,n-1);
    return 0;
}