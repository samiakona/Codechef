#include<iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N, i;
        cin >> N;
        int s=0, arr[2*N];
        for(i=0;i<2*N;i++)
        {
            cin >> arr[i];
            s=s+arr[i];
        }
        if(s%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
