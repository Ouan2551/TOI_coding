#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int y1, m1, d1, y2, m2, d2; y1 = m1 = d1 = y2 = m2 = d2 = 0;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    // wrong
    if (y1 == y2 && m1 == m2 && d1 == d2)
    {
        cout << 0;
    }
    else if (y1 > y2)
    {
        cout << 2;
    }
    else if (m1 < m2)
    {
        cout << 1;
    }
    else if (d1 > d2)
    {
        cout << 2;
    }
    else
    {
        cout << 1;
    }

    // // correct
    // if (y1 < y2) {
    //     return 1;  // person 1 is older
    // } else if (y1 > y2) {
    //     return 2;  // person 2 is older
    // } else {  // y1 == y2
    //     if (m1 < m2) {
    //         return 1;
    //     } else if (m1 > m2) {
    //         return 2;
    //     } else {  // m1 == m2
    //         if (d1 < d2) {
    //             return 1;
    //         } else if (d1 > d2) {
    //             return 2;
    //         } else {
    //             return 0;  // same date
    //         }
    //     }
    // }
    return 0;
}