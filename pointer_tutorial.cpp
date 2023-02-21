#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int* b;
    b=&a;
    int** c=&b;
    int*** d=&c;
    int**** e=&d;
    int***** f=&e;
    int****** g=&f;
    int******* h=&g;
    int******** i=&h;
    int********* j=&i;
    int********** k=&j;
    int*********** l=&k;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<&c<<endl;
    cout<<**c<<endl;
    cout<<***d<<endl;
    cout<<****e<<endl;
    cout<<*****f<<endl;
    cout<<******g<<endl;
    cout<<*******h<<endl;
    cout<<********i<<endl;
    cout<<*********j<<endl;
    cout<<**********k<<endl;
    cout<<***********l<<endl;
    return 0;
}