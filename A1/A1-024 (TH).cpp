#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int year, size_cc; cin >> year >> size_cc;
    if (year <= 1990)
    {
        if (size_cc <= 1500)
        {
            cout << 1250;
        }
        else if (size_cc <= 2000)
        {
            cout << 1400;
        }
        else
        {
            cout << 2000;
        }
    }
    else if (year <= 1999)
    {
        if (size_cc <= 1500)
        {
            cout << 1100;
        }
        else if (size_cc <= 2000)
        {
            cout << 1300;
        }
        else
        {
            cout << 1700;
        }
    }
    else
    {
        if (size_cc <= 1500)
        {
            cout << 1000;
        }
        else if (size_cc <= 2000)
        {
            cout << 1200;
        }
        else
        {
            cout << 1500;
        }
    }
    return 0;
}