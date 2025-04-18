#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, check_count; cin >> count;
    vector<vector<char>> path;
    for (int i = 0; i < count; i++)
    {
        vector<char> row;
        for (int j = 0; j < count; j++)
        {
            char data; cin >> data; row.push_back(data);
            check_count += (data == '.') ? 1 : 0;
        }
        path.push_back(row);
    }
    if (check_count == count*count)
    {
        cout << count*count; return 0;
    }
    return 0;
}