#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int year, size_cc; cin >> year >> size_cc;
    int tax[3][3] = {{1250, 1400, 2000}, {1100, 1300, 1700}, {1000, 1200, 1500}};
    int i = (year <= 1990) ? 0 : (year <= 1999) ? 1 : 2;
    int j = (size_cc <= 1500) ? 0 : (size_cc <= 2000) ? 1 : 2;
    cout << tax[i][j];
    return 0;
}