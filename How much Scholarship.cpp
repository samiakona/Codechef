#include<iostream>
using namespace std;
int main()
{
    int i;
    cin >> i;
    if(1>=i || i<=50)
    {
        cout<< "100"<<endl;
    }
    else if(51>=i || i<=100)
    {
        cout<< "50"<<endl;
    }
    else
    {
        cout<< "0"<<endl;
    }

    return 0;
}
