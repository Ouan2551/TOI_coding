#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string num1, num2; cin >> num1; char op_used; cin >> op_used;
    vector<int> change; int count = num1.size(), result = 0, carry = 0;
    for (int i = count - 1; i >= 0; i--)
    {
        change.push_back(num1[i]);
    }
    for (int i = 0; i < count; i++)
    {
        num2 += change[i];
    }
    for (int i = 0; i < count; i++)
    {
        if (op_used == '+')
        {
            result = (num1[i] - '0') + (num2[i] - '0');
            int result = (result % 10) + carry, carry = result / 10;
            cout << result;
        }
        else if (op_used == '*')
        {
            result = (num1[i] - '0') * (num2[i] - '0');
            cout << result;
        }
    }
    
    return 0;
}