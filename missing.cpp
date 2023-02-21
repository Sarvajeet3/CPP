//3,7,8,1,4,6,9,10
#include<iostream>
using namespace std;

int main()
{
    int arr[]={3,7,8,1,4,6,9,10};
    arr.sort();
    int size1=sizeof(arr);
    int max=arr[size1-1];
    int i=0;
    while(i<max)
    {
        if(i!=0){
        if(arr[i]!=(arr[i-1]+1)){
           printf(arr[i]-1);
        }
        }
        i++;
        
    }

    return 0;
}