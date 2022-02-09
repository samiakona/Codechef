/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/

#include<iostream>
using namespace std;
int main()
{
    int X, Y, T;
    double K;
    cin>> T;
    while(T--)
    {
        cin>> X>> Y;
        K = X/2;
        if(Y>=K)
        {
            cout << K << endl;
        }
        else
        {
            cout << Y <<  endl;
        }
    }
    return 0;
}
