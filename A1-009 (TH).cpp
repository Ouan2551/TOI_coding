#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num1, num2; cin >> num1 >> num2; int result = num1 + num2;
    if (result >= 50)
    {
        cout << result << '\n' << "pass";
    }
    else
    {
        cout << result << '\n' << "fail";
    }
    return 0;
}