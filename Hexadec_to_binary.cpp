#include<bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

string calculateIP(string s1)
{
            string s2="",sc;
            int arr[4],num=0,j=0,digits=0;
            for(int i=0;i<s1.size();i++)
            {
                if(s1[i]=='.')
                {
                     sc=toBinary(num);
                     for(int j=8-sc.size();j>0;j--)
                     s2+='0';
                     s2+=sc;
                     s2+=" ";
                     num=0;
                }
                else
                {
                num=((num*10)+(s1[i]-'0'));
                }
            }
            sc=toBinary(num);
            for(int j=8-sc.size();j>0;j--)
            s2+='0';
            s2+=sc;
        return s2;
}

int isValid(string s) {
            int arr[4],num=0,j=0,digits=0;
            for(int i=0;i<s.size();i++)
            {
                if(!((s[i]>='0' && s[i]<='9')||s[i]=='.'))
                return 0;
                if(s[i]=='.' && s[i+1]!='.')
                {
                 if(num<256)
                 {
                     if((num<10 && digits>1)||(num<100 && digits>2))
                     return 0;
                     arr[j]=num;
                     j++;
                     num=0;
                     digits=0;
                     
                 }
                 else
                 return 0;
                }
                else
                {
                if(digits==3)
                return 0;
                num=((num*10)+(s[i]-'0'));
                digits++;
                }
            }
            if((num<10 && digits>1)||(num<100 && digits>2))
            return 0;
            if(j==3 &&(num<256 && num>=0))
            return 1;
            else
            return 0;
        }

int main()
{
    string ip;
    cout<<"Enter IP address: ";
    cin>>ip;
    
    if(isValid(ip))
    {
        cout<<endl<<"Entered IP address in binary form is:"<<endl;
        cout<<calculateIP(ip);
    }
    else{
        cout<<"IP address is not valid";
    }
}