#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char check; cin >> check;
    char all_check[5] = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < 5; i++)
    {
        if (check == all_check[i])
        {
            cout << "yes"; return 0;
        }
    }
    cout << "no";
    return 0;
}