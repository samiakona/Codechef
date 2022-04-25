#include<iostream>
using namespace std;
int main()
{
    int i, t, x, y;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> x >> y;
        x=x*3;
        y=y*2;
        int ans = min(x,y);
        cout << ans << endl;
    }
    return 0;
}
