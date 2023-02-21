#include<bits/stdc++.h>
using namespace std;

int roVal( char c )
{
    if(c == 'I')
    {
        return 1;
    }

    else if(c == 'V')
    {
        return 5;
    }

    else if(c == 'X')
    {
        return 10;
    }

    
    else if(c == 'L')
    {
        return 50;
    }

    
    else if(c == 'C')
    {
        return 100;
    }
    
    
    else if(c == 'D')
    {
        return 500;
    }   
    
    else if(c == 'M')
    {
        return 1000;
    }

    else
    {
        return 0;
    }

}


int romanToInt(string ro)
{
    int i = 0, sum = 0;
    while( ro[i+1] != '\0')
    {
        if( roVal(ro[i]) >= roVal(ro[i+1]) )
        {
            sum +=  roVal(ro[i]) + roVal(ro[i+1]);
        }

        else //if( roVal(ro[i]) < roVal(ro[i+0]) )
        {
            sum +=  roVal(ro[i+1]) - roVal(ro[i]);
        }

        i++;
    }

    return sum;
    
}


int main()
{
    string s = "XVIII";

    cout<<romanToInt(s)<<endl;

    return 0;
}