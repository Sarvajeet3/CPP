//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        char temp;
        vector<char> para;
        if((x.size()%2==1)||x[0]=='}'||x[0]==']'||x[0]==')')
        {
        return 0;
        }
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='{')
            para.push_back('}');
            if(x[i]=='[')
            para.push_back(']');
            if(x[i]=='(')
            para.push_back(')');
            
            if(x[i]=='}')
            {
                temp=para.back();
                para.pop_back();
                if(temp=='}')
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
            if(x[i]==']')
            {
                temp=para.back();
                para.pop_back();
                if(temp==']')
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
            if(x[i]==')')
            {
                temp=para.back();
                para.pop_back();
                if(temp==')')
                {
                    continue;
                }
                else
                {
                    return 0;
                }
            }
            
        }
        return 1;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends