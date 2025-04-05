#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int nums[3] = {0}, check = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    if (nums[0] >= 5)
    {
        check++;
    }
    if (nums[1] >= 20)
    {
        check++;
    }
    if (nums[2] >= 25)
    {
        check++;
    }
    if (check == 3)
    {
        cout << "pass";
    }
    else
    {
        cout << "fail";
    }
    return 0;
}