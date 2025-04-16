#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> dish; int count = 0, num; cin >> count;
    vector<vector<int>> result;
    for (int i = 0; i < count; i++)
    {
        cin >> num; dish.push_back(num);
    }
    sort(dish.begin(), dish.end());
    for (int i = 0; i < count; i++)
    {
        
    }
    return 0;
}