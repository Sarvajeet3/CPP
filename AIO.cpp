#include<iostream>
#include<math.h>
using namespace std;

///// INCLUSION EXCLUSION PRINCIPLE ////////////////

// int numDivisible(int a, int b, int c)
// {
//     int n1,n2,n3;

//     n1 = a/b;
//     n2 = a/c;
//     n3 = a/(b*c);
//     return(n1 + n2 - n3);

// }

// int main()
// {
//     cout<<(numDivisible(50, 3, 2));
//     return 0;
// }

///// OPTIMIZED PRIME NUMBER APPROACH //////////

// void fastPrime(int n)
// {
//     int nums[n] = {0};

//     for( int i = 2; i < n; i++)
//     {
//         for( int j = i*i; j <= n; j+=i)
//         {
//             if(nums[j] != 1)
//             {
//                 nums[j] = 1;
//             }

//             else
//             {
//                 continue;
//             }
//         }

//     }

//     for(int i = 2; i<n; i++)
//     {
//        if(nums[i] != 1)
//        {
//           cout<<i<<" ";
//        }
//     }

// }

// int main()
// {   
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     fastPrime(n);
// }


// int main()
// {
//     int n;
//     cout<<" Enter Number: ";
//     cin>>n;

//     for( int i = 2; i< sqrt(n); i++)
//     {
//         if(n%i == 0)
//         {
//             cout<< n <<" is not a prime number"<<endl;
//             return 0;
//         }
//     }
//         cout<< n <<" IS PRIME NUMBER "<<endl;

//     return 0;
// }

///// GCD using Euclids Algorithm /////

// int sGCD(int n1, int n2)
// {   int diff = 1;
//     while( diff != 0)
//     {
//         diff = abs(n1 - n2);
//         n1 = n2;
//         n2 = diff;
//     }

//     return n1;
// }

// int GCD(int n1, int n2)
// {   int diff = 1;
//     while( diff != 0)
//     {
//         diff = (n1 % n2);
//         n1 = n2;
//         n2 = diff;
//     }

//     return n1;
// }

// int main()
// {
//     int a , b ;
//     cout<<"Enter Numbers: ";
//     cin>>a>>b;
//     cout<<sGCD(a,b)<<endl;
//     cout<<GCD(a,b)<<endl;
//     return 0;
// }

// int sumN(int n)
// {
//     if( n == 1)
//     {
//         return n;
//     }                   

//     else
//     {
//         return(n+sumN(n-1));
//     }

// }

// int main()
// {
//     int n = 5;
//     cout<<sumN(n)<<endl;
//     return 0;
// }

// int pow (int n, int p)
// {
//     if( p == 0 )
//     {
//         return 1;
//     }

//     else
//     {   
//         return n*pow(n, p-1);    
//     }

// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<pow(a,b)<<endl;
//     return 0;
// }

// int fac( int n)
// {
//     if( n == 1)
//     {
//         return 1;
//     }

//     else
//     {
//         return n*fac(n-1);
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fac(n)<<endl;
//     return 0;
// }

// int fibo( int n)
// {
//     if(n==1 || n == 0)
//     {   
//         return n;
//     }

//     else
//     {
//         return (fibo(n-1) + fibo(n-2));
//     }

// }

// int main()
// {
//     int n = 5;

//     cout<<fibo(n)<<endl;

//     return 0;
// }

// int main()
// {
//     int arr[] = {1,2,3,4,5,7-2,7,8,9};
//     for( int i = 0; i<(sizeof(arr)/4)-1; i++)
//     {
//         if(arr[i]<=arr[i+1])
//         {
//             continue;
//         }
//         else
//         {
//             cout<<"Array NOT sorted";
//             return 0;
//         }
//     }
//     cout<<"SORTED";
//     return 0;
// }

// bool isSort(int* a, int s)
// {
//     if( s == 1 )
//     {
//         return true;
//     }

//     else
//     {
//         return ( a[0]<=a[1] && isSort(a+1, s-1));
//     }
    
// }


// int main()
// {
//     int arr[] = {1,2,3,3,4,5,6,7,8,9};
//     int sz = (sizeof(arr)/4);

//     cout<<isSort(arr, sz);

//     return 0;
// }

///////// PRINT NUMBERS USING RECURSION ////////////////////

// void revNprint(int n)
// {
//     if(n == 1)
//     {
//        cout<<1<<endl;
//        return;
//     }
//         cout<< n << " ";
//         revNprint(n-1);   
// }

// void Nprint(int n)
// {
//     if(n == 1)
//     {
//        cout<<n<<" ";
//        return;
//     }
//     else
//     {
//         Nprint(n-1);
//         cout<< n << " ";
//     }    
// }

// int main()
// {
//     revNprint(25);
//     cout<<"\n\n\n";
//     Nprint(100/4);
//     return 0;
// }


