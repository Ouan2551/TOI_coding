#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n, num, count = 1; cin >> m >> n;
    vector<int> first; vector<int> second;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        first.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        second.push_back(num);
    }
    // count from value you get
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (first[i] == second[j])
            {
                count++;
            }
        }
    }
    // count from line that pass
    cout << count;
    return 0;
}