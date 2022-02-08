/**
    Author: Samia Akter Kona
    Bangladesh University of Business and Technology (BUBT)
**/
#include<iostream>
using namespace std;
int main()
{
    int T, Year;
    cin >> T;
    while(T--)
    {
        cin >> Year;
        if(Year==2010 || Year==2015 || Year==2016 || Year==2017 || Year==2019)
        {
            cout << "HOSTED" << endl;
        }
        else
        {
            cout << "NOT HOSTED" << endl;
        }
    }
    return 0;
}
