#include<iostream>
using namespace std;
int main ()
{
    int T;
    int A, B;
    cin >> T;
    while(T--)
    {
        cin >> A >> B;
        if(A>0 && B>0)
        {
            cout << "Solution" << endl;
        }
        else if (A>0 && B==0)
        {
            cout << "Solid" << endl;
        }
        else if (B>0 && A==0)
        {
            cout << "Liquid" << endl;
        }
    }
    return 0;
}
