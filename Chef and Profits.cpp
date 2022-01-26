#include<iostream>
using namespace std;
int main()
{
    int X, Y, Z;
    int Total, Rec, Pro;
    int T;
    cin>>T;
    while(T--)
    {
        cin >> X >> Y >> Z;
        Total = X*Y;
        Rec = X*Z;
        Pro = Rec - Total;
        cout << Pro << endl;
    }
    return 0;
}
