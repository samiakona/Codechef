#include<iostream>
using namespace std;
int main()
{
    int R,S,K;
    int T;
    cin >> T;
    while(T--)
    {
        cin>> S >> K;
        R = S%K;
        cout << R <<endl;
    }
    return 0;
}
