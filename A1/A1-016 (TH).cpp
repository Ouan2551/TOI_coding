#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string code; cin >> code;
    if (code[2] == '1' && code[3] == '6')
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}