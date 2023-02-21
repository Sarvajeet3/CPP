#include<iostream>
using namespace std;

void checkp(int a, int b, int c)
{
   if ((a*a)==((b*b)+(c*c)))
   {
    cout<<"It is pythogorain triplets.";
   }
   else
   {
    cout<<"It is Not pythogorain triplets.";
   }

}

int main()
{
    int n1,n2,n3;
    cout<<"Enter a Pythagoian triplets:";
    cin>>n1>>n2>>n3;
    if(n3>n2)
    {
        int temp=n2;
        n2=n3;
        n3=temp;
    }
    if(n2>n1)
    {
        int temp=n2;
        n2=n1;
        n1=temp;
    }
    checkp(n1,n2,n3);
    return 0;
}