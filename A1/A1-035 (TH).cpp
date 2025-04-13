#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count = 0, result = 0; cin >> count;
    for (int i = 1; i <= count; i++)
    {
        result += pow(i, 2);
    }
    cout << result;
    return 0;
}