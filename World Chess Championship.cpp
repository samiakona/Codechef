/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int X,T,i;
    string s;
    cin >> T;
    while(T--)
    {
        int CC=0,CN=0,D=0;
        cin >> X;
        cin >> s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='C')
            {
                CC++;
            }
            else if(s[i]=='N')
            {
                CN++;
            }
            else
            {
                D++;
            }
        }
        if(CC>CN)
        {
            cout << 60*X <<endl;
        }
        else if(CC<CN)
        {
            cout << 40*X <<endl;
        }
        else
        {
            cout << 55*X <<endl;
        }
    }
    return 0;
}
