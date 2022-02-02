#include<iostream>
using namespace std;
int main()
{
    int A, B, C, P, Q, R;
    int T,K;
    cin >> T;
    while(T--)
    {
        cin >> A >> B >> C >> P >> Q >> R;
        K= (P+Q+R)/2;
        if((P+B+C)>K)
        {
            cout << "YES" << endl;
        }
        else if((A+Q+C)>K)
        {
            cout << "YES" << endl;
        }
        else if((A+B+R)>K)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
