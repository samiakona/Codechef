#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    int K, P;
    cin >> T;
    for (int i=0; i<T; i++)
    {
        cin >> K;
        P = sqrt(K);
        cout << P << endl;
    }
    return 0;
}
