#include<iostream>
using namespace std;

int minJumps(int arr[], int n)
{
        int c=arr[0],cs=0,jumps=0;
        
        if(n==1)
            {
                jumps=0;
                return jumps;
            }
            
        for(int i=0; i<n; i++)
        {
            if((c==0 && cs==0)&&arr[i]==0 || (cs<0 && c<0))
            {
                jumps=-1;
                return jumps;
            }
            if(cs<=arr[i])
            {
                cs=arr[i];
            }
            if(c==0 || i==(n-1))
            {
                jumps++;
                c=cs;
                cs=0;
            }
            c--;
            cs--;
        }
        return jumps;
 }


int main()
{
    int n1=5;
    int arr1[]={1,2,0,0,0};
    cout<<minJumps(arr1,n1);
    return 0;
}