#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string text; cin >> text;
    transform(text.begin(), text.end(),text.begin(), ::tolower);
    reverse(text.begin(), text.end());
    cout << text;
    return 0;
}