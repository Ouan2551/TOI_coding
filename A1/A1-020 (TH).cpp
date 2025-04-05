#include <iostream>
using namespace std;
int main()
{
    int nums[3] = {0}, increase = 0, decrease = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < 2; i++)
    {
        int num = nums[i];
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
    }
    
    
    if (increase == 4)
    {
        cout << "increasing";
    }
    else if (decrease == 4)
    {
        cout << "decreasing";
    }
    else
    {
        cout << "neither";
    }
    return 0;
}