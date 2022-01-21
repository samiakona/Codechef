#include<iostream>
using namespace std;
int main()
{
    int A, B, C;
    int T;
    cin >> T;
    while(T--)
    {
        int k1=0,k2=0,k3=0;
        cin >> A >> B >> C;
        if(A>50)
        {
            k1++;
        }
        if(B>50)
        {
            k2++;
        }
        if(C>50)
        {
            k3++;
        }
        if(k1==1)
        {
            cout << "A"<<endl;
        }
        if(k2==1)
        {
            cout << "B"<<endl;
        }
        if(k3==1)
        {
            cout << "C"<<endl;
        }
        if(k1==0 && k2==0 && k3==0)
        {
            cout << "NOTA"<<endl;
        }

    }
    return 0;
}
