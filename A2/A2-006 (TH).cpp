#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count; cin >> count;
    vector<vector<char>> path;
    for (int i = 0; i < count; i++)
    {
        vector<char> row;
        for (int j = 0; j < count; j++)
        {
            char data; cin >> data; row.push_back(data);
        }
        path.push_back(row);
    }
    // for (int i = 0; i < count; i++)
    // {
    //     for (int j = 0; j < count; j++)
    //     {
    //         cout << path[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }
    
    return 0;
}