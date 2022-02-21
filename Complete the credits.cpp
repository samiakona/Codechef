#include<iostream>
using namespace std;
int main()
{
    int T,N;
    cin >> T;
    while(T--)
    {
        cin >> N;
        if(N>65)
        {
            cout << "Overload"<< endl;
        }
        else if(N<35)
        {
            cout << "Underload" << endl;
        }
        else
        {
            cout<< "Normal" << endl;
        }

    }
    return 0;
}
