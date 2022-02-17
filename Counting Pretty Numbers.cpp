#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int L,R;
    int T,i;
    cin >> T;
    while(T--)
    {
        int cnt=0;
        cin >> L >> R;
        for(i=L; i<=R; i++)
        {
            if((i%10==2) || (i%10==3) || (i%10==9))
            {
                cnt++;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}
