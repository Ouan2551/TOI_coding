#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int month, day; cin >> month >> day;
    if (month % 3 == 0 && day >= 21)
    {
        if (month == 3)
        {
            cout << "spring";
        }
        else if (month == 6)
        {
            cout << "summer";
        }
        else if (month == 9)
        {
            cout << "fall";
        }
        else if (month == 12)
        {
            cout << "winter";
        }
    }
    else
    {
        if (month <= 3)
        {
            cout << "winter";
        }
        else if (month <= 6)
        {
            cout << "spring";
        }
        else if (month <= 9)
        {
            cout << "summer";
        }
        else if (month <= 12)
        {
            cout << "fall";
        }
    }
    return 0;
}