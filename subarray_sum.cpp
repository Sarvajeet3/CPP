#include<iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int sum=0;
            int n=i;
            while(sum<=s)
            {
                
                sum=sum+arr[n];
                if(s==sum)
                {
                vec.push_back(i+1);
                vec.push_back(n+1);
                return vec;
                }
                n++;
            }
        }
        vec.push_back(-1);
        return vec;
    }

int main()
{
int n1;
cout<<"Enter Size of Array:";
cin>>n1;
int arr1[n1];
cout<<"Enter Number of Elements In Array:";
for (int i=0;i<n1;i++)
{
    cin>>arr1[i];
}

long long s1;
cout<<"Enter Sum:";
cin>>s1;
vector<int>res;
        res = subarraySum(arr1, n1, s1);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
}