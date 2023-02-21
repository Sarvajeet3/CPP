
#include<bits/stdc++.h>
using namespace std;



    int minJumps(int arr[], int n){
        int i=0,jump=0;
        for(int j=0;j<n;j++)
        {
            if(j==i)
            {
                jump++;
                cout<<arr[j];
                i=i+arr[j];
                
            }
        }
        return jump;
    }




int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for (int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<minJumps(arr1,n1);
    return 0;
}
 