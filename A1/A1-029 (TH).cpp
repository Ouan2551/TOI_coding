#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    char check[5] = {'a', 'e', 'i', 'o', 'u'};
    string text; cin >> text; int count = 0, size = text.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (text[i] == check[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}