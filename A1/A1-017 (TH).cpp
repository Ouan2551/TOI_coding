#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int y1, m1, d1, y2, m2, d2; y1 = m1 = d1 = y2 = m2 = d2 = 0;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2))
    {
        cout << 2;
    }
    else if (y1 == y2 && m1 == m2 && d1 == d2)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }
    return 0;
}