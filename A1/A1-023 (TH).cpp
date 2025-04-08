#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int temp; char unit; cin >> temp >> unit;
    if ((temp <= 0 && (unit == 'C' || unit == 'c')) || (temp <= 32 && (unit == 'F' || unit == 'f')))
    {
        cout << "solid";
    }
    else if ((temp < 100 && (unit == 'C' || unit == 'c')) || (temp < 212 && (unit == 'F' || unit == 'f')))
    {
        cout << "liquid";
    }
    else
    {
        cout << "gas";
    }
    return 0;
}