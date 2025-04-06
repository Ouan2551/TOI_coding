#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int nums[3] = {0};
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    if ((nums[0] == nums[1]) && (nums[0] == nums[2]) && (nums[1] == nums[2]))
    {
        cout << "all the same";
    }
    else if ((nums[0] != nums[1]) && (nums[0] != nums[2]) && (nums[1] != nums[2]))
    {
        cout << "all different";
    }
    else
    {
        cout << "neither";
    }
    return 0;
}