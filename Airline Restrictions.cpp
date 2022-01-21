#include<iostream>
using namespace std;
int main()
{
    int A, B, C, D, E;
    int T;
    cin>> T;
    for(int i=0; i<T; i++)
    {
        cin >> A >> B >> C >> D >> E;
        if((A+B)<=D && C<=E)
        {
            cout << "YES" << endl;
        }
        else if((A+C)<=D && B<=E)
        {
            cout << "YES" << endl;
        }
        else if((B+C)<=D && A<=E)
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
