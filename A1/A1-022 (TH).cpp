#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int day, month; cin >> day >> month;
    if ((day >= 19 && day <= 22) && (month == 12 || month == 1))
    {
        cout << "capricorn";
    }
    else if ((day >= 18 && day <= 20) && (month == 1 || month == 2))
    {
        cout << "aquarius";
    }
    else if ((day >= 19 && day <= 20) && (month == 2 || month == 3))
    {
        cout << "pisces";
    }
    else if ((day >= 19 && day <= 21) && (month == 3 || month == 4))
    {
        cout << "aries";
    }
    else if (day >= 20 && (month == 4 || month == 5))
    {
        cout << "taurus";
    }
    else if (day >= 21 && (month == 5 || month == 6))
    {
        cout << "gemini";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "cancer";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "leo";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "cancer";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "cancer";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "cancer";
    }
    else if (day >= 22 && (month == 7 || month == 8))
    {
        cout << "cancer";
    }
    return 0;
}