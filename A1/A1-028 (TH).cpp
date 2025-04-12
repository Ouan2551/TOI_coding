#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // int num = 0; cin >> num;
    // string num_str = to_string(num);
    // reverse(num_str.begin(), num_str.end());
    // int reverse_num = stoi(num_str);
    int num = 0, reverse_num = 0; cin >> num;
    while (num > 0)
    {
        reverse_num = reverse_num * 10 + (num % 10);
        num /= 10;
    }
    cout << reverse_num;
    // string text; cin >> text;
    
    // for (int i = text.size(); i >= 0; i--)
    // {
    //     cout << text[i];
    // }
    return 0;
}