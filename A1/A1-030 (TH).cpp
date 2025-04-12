#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0, result = 0; cin >> count;
    int nums[count][2] = {0};
    for (int i = 0; i < count; i++)
    {
        cin >> nums[i][0] >> nums[i][1];
    }
    for (int i = 0; i < count; i++)
    {
        int value = max(nums[i][0], nums[i][1]);
        result += value;
        if (count == 1)
        {
            break;
        }
        cout << value;
        if (i == count - 1)
        {
            cout << " = ";
        }
        else
        {
            cout << " + ";
        }
    }
    cout << result;
    return 0;
}