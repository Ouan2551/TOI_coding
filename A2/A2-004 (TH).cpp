#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <climits>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<int> dish; int count = 0, num; cin >> count;
    unordered_map<int, int> check;
    for (int i = 0; i < count; i++)
    {
        cin >> num; dish.push_back(num);
    }
    sort(dish.begin(), dish.end());
    for (int i = 0; i < count; i++)
    {
        int num = dish[i];
        check[num] += 1;
    }
    int max_val = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        int num = dish[i];
        max_val = max(max_val, check[num]);
    }
    cout << max_val;
    return 0;
}