#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    for (int i = 1; i <= count; i++)
    {
        if (i % 5 == 0)
        {
            cout << 'X';
        }
        else
        {
            cout << '*';
        }
    }
    
    return 0;
}