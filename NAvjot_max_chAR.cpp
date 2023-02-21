#include <bits/stdc++.h>
using namespace std;
string g;

char maxoccr(string s)
{
    char g[26];
    for (int i = 0; i < 26; i++)
    {
        g[i] = '0';
    }
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
        {
            g[ch - 97] += 1;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            g[ch - 65] += 1;
        }
    }
    // for (int i = 0; i < s.size(); i++)
    // {
    //     char ch = s[i];

    //     if (ch > 'A' && ch < 'Z')
    //     {
    //         g['A' - 65] += 1;
    //     }
    // }
    int j = 0, k = 0;
    char mxi;
    for (int i = 0; i < 26; i++)
    {
        if (k < g[i])
        { 
            int v =i +65 ;
            mxi = v;
            k = g[i];
        }
    }
    
    return mxi;
}
int main()
{
    string s = "Navjot Singh Badyal";
    cout << maxoccr(s);
    return 0;
}