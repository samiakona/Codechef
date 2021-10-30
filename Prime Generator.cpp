#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int k)
{
    if(k<=1)
    {
        return false;
    }
    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int i, s, k, t,j;
    cin >> t;
    while (t--)
    {
        cin >> s >> k;
        for(i=s; i<=k; i++)
        {
            if(isPrime(i))
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
