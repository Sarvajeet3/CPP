#include<iostream>
using namespace std;
void itsleap(int year){
    if(year%100==0){
        if(year%400==0){
            cout<<"It is leap year "<<endl;
            return;
        }
        cout<<"not leap "<<endl;
        return;
    }
    else if(year%4==0){
        cout<<"it is leap "<<endl;
        return;
    }
    cout<<"not leap "<<endl;
    return;

}

int main(){
    int n;
    cout<<"enter year"<<endl;
    cin>>n;
    itsleap(n);
    return 0;
}