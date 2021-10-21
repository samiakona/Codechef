#include<iostream>
using namespace std;
int main()
{
    int T, i,flag1,flag2;
    int arr[10];
    cin>> T;
    while(T--)
    {
        flag1=0;
        flag2=0;
        for(i=0; i<5; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)
            {
                flag1++;
            }
            if(arr[i]==2)
            {
                flag2++;
            }
        }
        if(flag1>flag2)
        {
            cout << "INDIA" << endl;
        }
        else if(flag2>flag1)
        {
            cout << "ENGLAND" << endl;
        }
        else
        {
            cout << "DRAW" << endl;
        }

    }

    return 0;

}
