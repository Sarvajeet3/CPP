#include<bits/stdc++.h>
using namespace std;
int main()
{
string plainText;
 std::getline(std::cin, plainText);
 char mat[5][5];
 std:: vector<int> row;
 std:: vector<int> col;
 int k=0,j=0;
 for(int i=97;i<123;i++)
 {
 char ch =(char)i;
 if(j==5)
 {
 j=0; 
 k++;
 }
 mat[k][j++]=ch;
 }
 for(int i=0;i<5;i++)
 {
 for(int j=0;j<5;j++)
 {
 cout<<mat[i][j]<<" ";
 } 
 cout<<endl;
 }
 int z=0;
 int l,m;
 while(plainText[z]!='\0')
 {
 for( l=0;l<5;l++)
 {
 for( m=0;m<5;m++)
 {
 if(plainText[z]==mat[l][m])
 { 
 row.push_back(l);
 col.push_back(m);
 }
 }
 }
 z++;
 }
 for(auto i:row)
 {
 cout<<i<<" "; 
 }
 cout<<endl;
 for(auto i:col)
 {
 cout<<i<<" ";
 }
return 0;
}