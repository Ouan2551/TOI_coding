#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num; cin >> num;
    cout << "10 = " << num / 10 << '\n'; num = num % 10;
    cout << "5 = " << num / 5 << '\n'; num = num % 5;
    cout << "2 = " << num / 2 << '\n'; num = num % 2;
    cout << "1 = " << num / 1 << '\n';
    return 0;
}