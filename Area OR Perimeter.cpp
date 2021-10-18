#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b;
    int Area, Peri;
    cin >> a >> b;

    Area = a*b;
    Peri = 2*(a+b);
    if(Area > Peri)
    {
        printf("Area\n");
        printf("%d\n", Area);
    }
    else if(Peri > Area)
    {
        printf("Peri\n");
        printf("%d\n", Peri);
    }
    else if( Area == Peri)
    {
        printf("Eq\n");
        printf("%d\n", Area);

    }
    return 0;
}
