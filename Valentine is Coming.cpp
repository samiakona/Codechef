#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int X, Y, K;
    int T;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y;
        K=X/Y;
        cout << K <<endl;
    }

    return 0;
}
