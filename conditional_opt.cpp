#include <bits/stdc++.h>
using namespace std;
vector<int> rotate(vector<int> rot)
{
    vector<int> tempi(rot.size());
    int i = 0;
    int j=1;
    while (i < rot.size())
    {
        tempi[(i + j) % (rot.size())] = rot[i];
        i++;
    }
    //  for(int i=0;i<tempi.size();i++)
    // cout<<tempi[i];
    // cout<<endl; 
    j++;

    return tempi;
}
int give_number(vector<int> v)
{
    int i = 0, num = 0;
    while (i < v.size())
    {
        num += 10 * v[i];
        i++;
    }
    // cout<<num<<"number "<<endl;
    return num;
}
int ans(vector<int> vec, int n)
{
    int i = 0, dif = INT_MAX;
    int k = n;
    int t = n;
    int minus = 0;
    int j = 0;
    //    cout<<vec.size()<<"size"<<endl;
    while (j < (vec.size() * vec.size()))
    {
        int num = give_number(rotate(vec));
        minus = k - num;
        //    cout<<"minus "<<num <<endl;
        if (minus < dif && minus > 0)
        {
            minus = dif;
        }
        j++;
    }
    return minus;
}

vector<int> seperate(int n)
{

    int i = 0;
    int j = 0;
    int k = n;

    while (k != 0)
    {
        j++;
        k = k / 10;
    }

    vector<int> m(j);

    while (n != 0)
    {
        m[i] = n % 10;
        n = n / 10;
        i++;
    }

    return m;
}
int main()
{
    int n = 231;
    vector<int> v = seperate(n);
    int m = ans(v, n);
  cout<<m<<endl;
    return 0;
}