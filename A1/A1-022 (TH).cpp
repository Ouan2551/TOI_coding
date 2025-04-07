#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int day, month; cin >> day >> month;
    if ((day >= 22 && month == 12) || (day <= 19 && month == 1))
    {
        cout << "capricorn";
    }
    else if ((day >= 20 && month == 1) || (day <= 18 && month == 2))
    {
        cout << "aquarius";
    }
    else if ((day >= 19 && month == 2) || (day <= 20 && month == 3))
    {
        cout << "pisces";
    }
    else if ((day >= 21 && month == 3) || (day <= 19 && month == 4))
    {
        cout << "aries";
    }
    else if ((day >= 20 && month == 4) || (day <= 20 && month == 5))
    {
        cout << "taurus";
    }
    else if ((day >= 21 && month == 5) || (day <= 21 && month == 6))
    {
        cout << "gemini";
    }
    else if ((day >= 22 && month == 6) || (day <= 22 && month == 7))
    {
        cout << "cancer";
    }
    else if ((day >= 23 && month == 7) || (day <= 22 && month == 8))
    {
        cout << "leo";
    }
    else if ((day >= 23 && month == 8) || (day <= 22 && month == 9))
    {
        cout << "virgo";
    }
    else if ((day >= 23 && month == 9) || (day <= 23 && month == 10))
    {
        cout << "libra";
    }
    else if ((day >= 24 && month == 10) || (day <= 21 && month == 11))
    {
        cout << "scorpio";
    }
    else if ((day >= 22 && month == 11) || (day <= 21 && month == 12))
    {
        cout << "sagittarius";
    }
    return 0;
}