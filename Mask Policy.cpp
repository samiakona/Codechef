#include<iostream>
using namespace std;
int main()
{
    int S, K, A, minimum;
    long long int T;
    cin>> T;
    while(T--)
    {
        cin >> S >> K;
        A= S-K;
        minimum = min(K,A);
        cout << minimum  << endl;
    }
    return 0;
}
