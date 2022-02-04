
/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int T;
    float K, S, n= 0.143;
    int p;
    cin >> T;
    while(T--)
    {
        cin >> p;
        S = n*p;
        K = pow(S,p);
        K = round(K);
        cout << K << endl;
    }
    return 0;
}
