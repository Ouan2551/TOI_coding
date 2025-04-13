#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string num; cin >> num; int count = num.size();
    for (int i = count; i >= 0; i--)
    {
        cout << num[i];
        if (i % 3 == 0 && i != 0)
        {
            cout << ',';
        }
    }
    return 0;
}