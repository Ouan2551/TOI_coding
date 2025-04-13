#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num = 0; cin >> num;
    num = num - (num % 10);
    while (num >= 0)
    {
        cout << num << ' '; num -= 10;
    }
    return 0;
}