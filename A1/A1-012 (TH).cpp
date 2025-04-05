#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string num1, num2; cin >> num1; char op_used; cin >> op_used;
    vector<int> change; int count = num1.size(), result = 0;
    for (int i = count - 1; i >= 0; i--)
    {
        change.push_back(num1[i]);
    }
    for (int i = 0; i < count; i++)
    {
        if (change[i] == '0')
        {
            continue;
        }
        num2 += change[i];
    }
    if (op_used == '+')
    {
        result = stoi(num1) + stoi(num2);
        cout << num1 << " + " << num2 << " = "<< result;
    }
    else if (op_used == '*')
    {
        result = stoi(num1) * stoi(num2);
        cout << num1 << " * " << num2 << " = " << result;
    }
    return 0;
}