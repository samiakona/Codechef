#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int flag1,flag2;
    int T,i;
    cin>> T;
    while(T--)
    {
        flag1=0;
        flag2=0;
        for(i=0; i<7; i++)
        {
            cin >> arr[i];
            if(arr[i]==0)
            {
                flag1++;
            }
            else if(arr[i]==1)
            {
                flag2++;
            }
        }
        if(flag1>flag2)
        {
            cout << "NO" << endl;
        }
        else if(flag2>flag1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
