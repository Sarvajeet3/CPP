// #include<bits/stdc++.h>
// #include<vector>

// using namespace std;
// int main()
// {
//     int n;
//     // cout<<"Enter Numbers of bracket:";
//     // cin>>n;
//     // char s[n];
//     // char ch[n/2];
//     vector <char> s;
//     vector <char> ch;

//     // s = "{[]}()";

//     cout<<"Enter Input:";
//     for(int o=0; o<4;o++)
//     {
//         cin>>s[o];
//     }
//     int i=0;
//     int ptr=0;
//     while(i<s.size())
//     {
//         if(s[i]=='{'||s[i]=='('||s[i]=='[')
//         {
//             if(s[i]=='(')
//             {
//                 int c=s[i]+1;
//                 char j=c;
//                 ch[ptr]=j;
//             }
//             else
//             {
//                 int c=s[i]+2;
//                 char j=c;
//                 ch[ptr]=j;
//             }
//             ptr++;
//         }
//         else
//         {
//             if(s[i]==ch[ptr-1])
//             {
//                 ptr--;
//             }
//             else
//             {
//                 cout<<"invalid input";
//                 return 0;
//             }
//         }
        
//         i++;

//     }
//     cout<<"valid input";
//     return 0;
// }



#include<iostream>

using namespace std;
int main()
{
    cout<<"Enter Input:";
    string s;
    cin>>s;
    int n=s.size();
    char ch[n/2];
    
    for(int o=0; o<n;o++)
    {
        cin>>s[o];
    }
    int i=0;
    int ptr=0;
    while(i<s.size())
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='[')
        {
            if(s[i]=='(')
            {
                int c=s[i]+1;
                char j=c;
                ch[ptr]=j;
            }
            else
            {
                int c=s[i]+2;
                char j=c;
                ch[ptr]=j;
            }
            ptr++;
        }
        else
        {
            if(s[i]==ch[ptr-1])
            {
                ptr--;
            }
            else
            {
                cout<<"invalid input";
                return 0;
            }
        }
        
        i++;

    }
    cout<<ptr;
    if(ptr==0)
    cout<<"valid input";
    else 
    cout<<"Invalid input";
    return 0;
}