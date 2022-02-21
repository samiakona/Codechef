#include<iostream>
using namespace std;
int main()
{
    int X, Y, Z,S=0;
    int T;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y >> Z;
        S= X+Z;
        if(S>Y)
        {
            cout << S << endl;
        }
        else
        {
            cout << Y << endl;
        }
    }
    return 0;
}
