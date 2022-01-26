#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int s;
        cin >> s;
       // int k = (s-1)+s+(s+1);
        //cout << k/3;
        cout << s-1 <<" "<< s <<" "<< s+1;
        cout << endl;
    }
    return 0;
}
