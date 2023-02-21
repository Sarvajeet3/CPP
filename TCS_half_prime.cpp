#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};

    for (int i = 2; i < n; i++)
    {
        arr[i] = i;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] != 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 0;
            }
        }
    }

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
        }
    }

    int hfPrime[(j * j)] = {0}, ct = 0;
    int ro = 0;

    for (int i = 0; i < j; i++)
    {
        for (int k = 0; k < j; k++)
        {
            if (i != k)
            {
                hfPrime[ro] = (arr[i] * arr[k]);
                ro++;
            }
        }
    }

    int ini = 0, diff = 0, add = 0;
    for (int i = 0; i < ro; i++)
    {
        diff = n - hfPrime[i];

        for (int j = 0; j < ro; j++)
        {
            if (hfPrime[j] == diff)
            {
                cout << "Secure" << endl;
                return 0;
            }
        }
    }

    cout << "Not secure" << endl;

    return 0;
}