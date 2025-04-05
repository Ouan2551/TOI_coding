#include <iostream>
using namespace std;
int main()
{
    // https://www.rapidtables.com/math/symbols/roman_numerals.html
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num; cin >> num;
    if (num < 1 || num > 9)
    {
        cout << "Error : Out of range";
    }
    else
    {
        if (num == 1)
        {
            cout << 'I';
        }
        else if (num == 2)
        {
            cout << "II";
        }
        else if (num == 3)
        {
            cout << "III";
        }
        else if (num == 4)
        {
            cout << "IV";
        }
        else if (num == 5)
        {
            cout << "V";
        }
        else if (num == 6)
        {
            cout << "VI";
        }
        else if (num == 7)
        {
            cout << "VII";
        }
        else if (num == 8)
        {
            cout << "VIII";
        }
        else if (num == 9)
        {
            cout << "IX";
        }
    }
    return 0;
}