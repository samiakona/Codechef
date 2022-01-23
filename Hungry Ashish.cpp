#include<iostream>
using namespace std;
int main()
{
    int T;
    int X, Y, Z;
    cin >> T;
    while(T--)
    {
        cin >> X >> Y >> Z;
        if(X>=Y)
        {
            cout << "PIZZA" << endl;
        }
        else if(X<Y && X>=Z)
        {
            cout << "BURGER" << endl;
        }
        if(X<Y && X<Z)
        {
            cout << "NOTHING" << endl;
        }
    }
    return 0;
}
