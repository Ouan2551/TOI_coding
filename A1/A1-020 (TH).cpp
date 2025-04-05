#include <iostream>
using namespace std;
int main()
{
    int nums[3] = {0}, increase = 0, decrease = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    int num = nums[0];
    for (int j = 1; j < 3; j++)
    {
        if (num - nums[j] <= -1)
        {
            increase++;
        }
        else if (num - nums[j] >= 1)
        {
            decrease++;
        }
    }
    if (increase == 2)
    {
        cout << "increasing";
    }
    else if (decrease == 2)
    {
        cout << "decreasing";
    }
    else
    {
        cout << "neither";
    }
    return 0;
}