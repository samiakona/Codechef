#include<iostream>
using namespace std;
int main()
{
    int T;
    int n,i;
    int count=0;

    cin >> T;
    while(T--)
    {

        cin >> n;
        for(i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout << "yes"<< endl;
        }
        else
        {
            cout << "no"<<endl;
        }
        count=0;
    }
    return 0;
}
