#include<iostream>
using namespace std;
int main()
{
    int S,K;
    int T;
    cin >> T;
    while(T--)
    {
        cin>> K;
        S = 52%K;
        cout << S <<endl;
    }
    return 0;
}
