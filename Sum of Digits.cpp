#include<iostream>
using namespace std;
int main()
{
    int k,p;
    int T;
    cin>>T;
    while(T--)
    {
        cin >> k;
        int sum=0;
        while (k != 0)
        {
            p   = k % 10;
            sum = sum + p;
            k   = k / 10;
        }
        cout << sum <<endl;
    }
    return 0;
}
