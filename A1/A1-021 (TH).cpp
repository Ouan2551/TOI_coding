#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int year; cin >> year; bool leap_year = false;
    if (year <= 1582)
    {
        leap_year = true;
    }
    else if (year % 4 == 0)
    {
        leap_year = true;
        if (year % 100 == 0)
        {
            leap_year = false;
            if(year % 400 == 0)
            {
                leap_year = true;
            }
        }
        
    }
    if (leap_year == true)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}