#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num1, num2; cin >> num1 >> num2;
    if (num1 % num2 == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}