#include <iostream>
#include <vector>
using namespace std;
int change_direction(int x, int y, int dx, int dy, int count)
{
    if (x == count - 1)
    {
        x = 
    }
    return x, y, dx, dy;
}
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
    int x = 0, y = 0, dx = 0, dy = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            // check start point
            if (path[x][y] == 'X')
            {
                continue;
            }
            // check that can go to finished point
            while (dx == count - 1 && dy == count - 1)
            {
                // check right
                if (path[dx][dy+1] == '.')
                {
                    dy = dy + 1;
                }
                // check down
                else if (path[dx+1][dy] == '.')
                {
                    dx = dx + 1;
                }
            }
        }
    }
    return 0;
}