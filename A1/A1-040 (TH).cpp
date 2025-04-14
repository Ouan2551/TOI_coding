#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num = 0, result = 0; vector<int> menus;
    while (num != 5)
    {
        cin >> num;
        menus.push_back(num);
    }
    int count = menus.size();
    for (int i = 0; i < count; i++)
    {
        int check = menus[i];
        switch (check)
        {
        case 1:result += 100;break;
        case 2:result += 120;break;
        case 3:result += 200;break;
        case 4:result += 60;break;
        }
    }
    cout << "Bye Bye" << '\n' << "Total Calories: " << result;
    return 0;
}