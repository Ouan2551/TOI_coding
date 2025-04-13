#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, n = 0; cin >> count;
    while (n <= 4)
    {
        if (count - n < 1)
        {
            return 0;
        }
        for (int i = 0; i < count - n; i++)
        {
            cout << '*';
        }
        cout << '\n'; n += 2;
    }
    
    return 0;
}