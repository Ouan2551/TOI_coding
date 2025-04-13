#include <iostream>
#include <climits>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0, num = 0, min_value = INT_MAX; cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> num;
        min_value = min(min_value, num);
    }
    cout << min_value;
    return 0;
}