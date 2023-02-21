#include<iostream>
using namespace std;
void itsleap(int year)
{
    if(year%4 ==0){
        if (year%100 == 0){
            if(year%400==0){
                cout<<"it is a leap year";

            }else 
            {
                   cout<<"it is not a leap year";
            }

        }
        else{
        
             cout<<"it is a leap year";
        
        
        }
    }else{
           cout<<"it is not a leap year";
    }
}
int main()
{
    int year=2100;
    itsleap(year);




    return 0;
}