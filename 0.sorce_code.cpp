#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int count;
    cin >> count;
    vector<vector<int>> cars(count, vector<int>(2));
    int result = 0;

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> cars[i][j];
        }
    }

    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                continue;
            }
            // cout << cars[i][0] << '>' << cars[j][0] << ' ' << cars[i][1] << '<' << cars[j][1] << '\n';
            if (cars[i][0] > cars[j][0] && cars[i][1] < cars[j][1])
            {
                result++;
            }
        }
    }

    cout << result;
    return 0;
}