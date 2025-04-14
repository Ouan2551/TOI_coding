#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long result = 1; int num; cin >> num;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    cout << result;
    return 0;
}