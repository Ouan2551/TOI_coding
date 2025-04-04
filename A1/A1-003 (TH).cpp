#include <iostream>
#include <climits>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int nums[3] = {0}, max_val = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < 3; i++)
    {
        max_val = max(nums[i], max_val);
    }
    cout << max_val;
    return 0;
}