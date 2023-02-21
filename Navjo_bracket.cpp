#include<iostream>
using namespace std;
int main()
{
    char a[] = {'{','[','(',')',']','}'};
    int i=0;
    char b[sizeof(a)]; 
    int k=0;
    int ch,lch;
 while(i<sizeof(a))
 {
     if(a[i]=='{' || a[i]=='[' || a[i]=='(')
    {
       if(a[i]=='(')
       {
     
        b[k]=')';
        cout<<b[k]<<a[i]<<endl;
        k++;

        }
        else if(a[i]=='{')
        {
    
            b[k]='}';
            cout<<b[k]<<a[i]<<endl;
            k++;

        }
        else 
        {
            b[k]=']';
           cout<<b[k]<<a[i]<<endl;
            k++;
            
       
        }}
    
        else
        {  if(a[i]==b[k-1])
            {
                k--;
            }
            else
            {
                cout<<"enter valid input"<<endl;
                
                 return 0;
            }
        }
     i++;
    }
    cout<<"It is valid"<<endl;
    return  0;
    
 }