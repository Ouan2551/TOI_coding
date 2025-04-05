#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char consonant, pass_consonant = 'H'; int num = 0, pass_num = 4567;
    cin >> consonant >> num;
    if (consonant == pass_consonant && num == pass_num)
    {
        cout << "safe unlocked";
    }
    else if (consonant != pass_consonant && num == pass_num)
    {
        cout << "safe locked - change char";
    }
    else if (consonant == pass_consonant && num != pass_num)
    {
        cout << "safe locked - change digit";
    }
    else
    {
        cout << "safe locked";
    }
    return 0;
}