#include<iostream>
using namespace std;
int main()
{
    int  a, b, c;
    int i, T;
    cin>> T;
    for(i=0;i<T;i++)
    {
        cin >> a >> b >> c;
        if (a==7 || b==7 || c==7)
        {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
