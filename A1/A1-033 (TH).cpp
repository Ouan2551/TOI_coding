#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, chk = 0; cin >> count;
    char check_char = ' ';
    char check[5] = {'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < count; i++)
    {
        cin >> check_char;
        for (int j = 0; j < 5; j++)
        {
            if (check_char == check[j])
            {
                chk++;
            }
        }
        check_char = ' ';
    }
    cout << chk;
    return 0;
}