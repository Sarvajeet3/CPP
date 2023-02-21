#include<iostream> 
using namespace std; 
string BtoD(string ipstr) 
{ 
 if(ipstr.size()!=35) 
 { 
 cout<<"This is Not a Valid Binary Notation of IP Address\n"; 
 return ""; 
 } 
 string Dip=""; 
 int temp=0,cnt=1; 
 for(int i=34;i>=0;i--) 
 { 
 if(ipstr[i]!='0'&& ipstr[i]!='1' && ipstr[i]!=' ') 
 { 
 cout<<"This is Not a Valid Binary Notation of IP Address\n"; 
 return ""; 
 } 
 if(ipstr[i]==' ') 
 { 
 string s=(i==26)?to_string(temp):to_string(temp)+'.'; 
 Dip=s+Dip; 
 temp=0; 
 cnt=1; 
 continue; 
 } 
 temp+=((ipstr[i]-'0')*cnt); 
 cnt*=2; 
 } 
 Dip=to_string(temp)+'.'+Dip; 
 return Dip; 
}

int main() 
{ 
 int ch; 
 string ipstr; 
 cout<<"\nEnter a 32-Bit Binary Address:"; 
 getline(cin,ipstr); 
 ipstr=BtoD(ipstr); 
 if(ipstr.size()!=0) 
 cout<<"\nDotted-Decimal Notaion: "<<ipstr<<endl; 
}