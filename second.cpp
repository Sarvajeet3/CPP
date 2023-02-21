#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int h=0,sh=0;
    cin>>n;
    int arr[n];
       for(int i=0;i<n;i++)
       {
        cin>>arr[i];
       }
    for(int i=0;i<n;i++)
    {
    if (arr[i]>sh){
        sh=arr[i];
        if(sh>h){
            swap(h,sh);
        }
    }
    }
    cout<<sh;
    return 0;
}