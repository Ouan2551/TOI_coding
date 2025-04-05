#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string first_name, last_name;
    cin >> first_name >> last_name;
    cout << "Hello " << first_name << ' ' << last_name << '\n';
    cout << first_name[0] << first_name[1] << last_name[0] << last_name[1];
    return 0;
}