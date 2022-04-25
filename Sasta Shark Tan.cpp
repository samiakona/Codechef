#include<iostream>
using  namespace std;
int main()
{
    int t, i, a, b, s, k;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> a >> b;
        s = a*10;
        k = b*5;
        if(s==k)
        {
            cout << "ANY" << endl;
        }
        else if (s>k)
        {
            cout << "FIRST" << endl;
        }
        else if(s<k)
        {
            cout << "SECOND"<<endl;
        }
    }
    return 0;
}
