/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/
#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y;
    int s,k;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> x >> y;
        s=a*b;
        k=x*y;
        if(k>s)
        {
            cout << "YES" << endl;
        }
        else if (k==s)
        {
            cout << "YES" << endl;
        }
        else if(k<s)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
