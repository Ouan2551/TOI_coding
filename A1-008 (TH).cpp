#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string id; cin >> id;
    if (id.size() == 13)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}