#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int W, H, M, N, num; vector<int> x_val; vector<int> y_val;
    cin >> W >> H >> M >> N;
    vector<int> area;
    for (int i = 0; i < M; i++)
    {
        cin >> num; x_val.push_back(num);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> num; y_val.push_back(num);
    }
    x_val.push_back(0); y_val.push_back(0); x_val.push_back(W); y_val.push_back(H);
    sort(x_val.begin(), x_val.end()); sort(y_val.begin(), y_val.end());
    for (int i = 0; i < M+1; i++)
    {
        for (int j = 0; j < N+1; j++)
        {;
            if (i + 1 == M + 2|| j + 1 == N + 2)
            {
                continue;
            }
            // cout << "x_val : " << x_val[i] << ' ' << x_val[i+1] << '\n';
            // cout << "y_val : " << y_val[j] << ' ' << y_val[j+1] << '\n';
            int width = abs(x_val[i] - x_val[i+1]);
            int length = abs(y_val[j] - y_val[j+1]);
            area.push_back(width*length);
        }
    }

    int size = area.size();
    sort(area.begin(), area.end());
    cout << area[size - 1] << ' ' << area[size - 2];
    return 0;
}