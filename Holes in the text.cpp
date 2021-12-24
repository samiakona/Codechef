#include<iostream>
using namespace std;
int main()
{
    string s;
    int T;
    cin >> T;
    while(T--)
    {
        int cnt=0, i;
        cin >> s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='A' || s[i]=='D' || s[i]=='O' || s[i]=='P' || s[i]=='R' || s[i]=='Q' )
            {
                cnt++;
            }
            else if(s[i]=='B')
            {
                cnt+=2;
            }
            else
            {
                cnt = cnt + 0;
            }
        }
        cout << cnt <<endl;
    }

    return 0;
}
