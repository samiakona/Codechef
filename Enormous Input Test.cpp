#include<iostream>
using namespace std;
int main ()
{
    int T;
    int p,s;
    cin >> T;
    cin >> p;
    int cnt=0;
    for(int i=0; i<T; i++)
    {
        cin >> s;
        if(s%p==0)
            cnt++;
    }
    cout << cnt << endl;
    cout<<endl;
    return 0;
}
