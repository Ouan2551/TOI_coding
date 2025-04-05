#include <iostream>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string first_name = "", last_name = "", age = "";
    cin >> first_name >> last_name >> age;
    int l1 = first_name.size(), l2 = last_name.size();
    if (l1 > 5 && l2 > 5)
    {
        cout << first_name[0] << first_name[1] << last_name[l2 - 1] << age[age.size() - 1];
    }
    else
    {
        cout << first_name[0] << age << last_name[l2 - 1];
    }
    return 0;
}