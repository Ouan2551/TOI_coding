#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int m, n, num; cin >> m >> n;
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
    
    return 0;
}