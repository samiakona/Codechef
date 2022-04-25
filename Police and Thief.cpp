#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y,ans;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> x >> y;
        ans = abs(x-y);
        cout << ans << endl;
    }
    return 0;
}
