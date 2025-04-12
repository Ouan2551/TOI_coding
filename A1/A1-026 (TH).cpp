#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int even = 0, odd = 0;
    for (int i = 0; i < 3; i++)
    {
        int num = 0; cin >> num;
        (num % 2 == 0) ? even++ : odd++;
    }
    cout << "even " << even << '\n' << "odd " << odd;
    return 0;
}