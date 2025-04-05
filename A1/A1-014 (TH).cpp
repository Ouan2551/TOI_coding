#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num = 0, min_val = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        cin >> num; min_val = min(min_val, num);
    }
    cout << min_val;
    return 0;
}