#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count; vector<int> value;
    for (int i = 0; i < count; i++)
    {
        cin >> value[i];
    }
    for (int i = 0; i < count; i++)
    {
        cout << value[i] << ' ';
    }
    return 0;
}