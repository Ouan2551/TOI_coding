#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int age; char check; cin >> age >> check;
    if (age <= 18 || check == 's' || check == 'S')
    {
        cout << 20;
    }
    else
    {
        cout << 50;
    }
    return 0;
}