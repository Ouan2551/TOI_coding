#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string num; cin >> num; int count = num.size();
    // if (count < 7)
    // {
        int position = count - 4;
        for (int i = 0; i < count; i++)
        {
            cout << num[i];
            if (i == position)
            {
                cout << ',';
            }
        }
    // }
    // this for who want size >= 7
    // else
    // {
    //     vector<int> position;int chk_position = count - 4;
    //     // find position
    //     while (chk_position > 0)
    //     {
    //         position.push_back(chk_position); chk_position -= 3;
    //     }
    //     int index = position.size() - 1;
    //     for (int i = 0; i < count; i++)
    //     {
    //         cout << num[i];
    //         if (i == position[index])
    //         {
    //             cout << ','; index--;
    //         }
    //     }
    // }
    return 0;
}