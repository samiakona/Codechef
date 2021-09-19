#include<iostream>
using namespace std;
int main()
{
    int N;
    int T;
    cin>> T;
    while(T--)
    {
        cin >> N ;
        if(N%2!=0)break;

        if (N%4==0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
