#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> marks;
    marks[1]=23;
    marks[2]=25;
    marks[5]=45;
    marks[3]=56;
    unordered_map<int,int>::iterator it;
    for(it=marks.begin();it!=marks.end();it++)
    {
         cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    cout<<"Is map empty?  : "<<marks.empty()<<endl;
    cout<<"After erasing 3 from map:"<<endl;
    marks.erase(3);
    for(it=marks.begin();it!=marks.end();it++)
    {
         cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    marks.insert({{3,34},{4,56}});
    cout<<"After entering 3 and 4 in map:"<<endl;
    for(it=marks.begin();it!=marks.end();it++)
    {
         cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    return 0;
}