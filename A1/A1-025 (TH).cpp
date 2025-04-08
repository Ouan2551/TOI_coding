#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string text; cin >> text;
    string result[2][4] = {{"queen", "king", "jack", "ace"}, {"diamonds", "hearts", "spades", "clubs"}};
    if (is_same<decltype(text[0] - '0'), int>::value)
    {
        if (text.size() == 3)
        {
            cout << "10 of clubs";
        }
        else
        {
            cout << text[0] << " of ";
            cout << (text[1] == 'D') ? "diamonds" : (text[1] == 'H') ? "hearts" : (text[1] == 'S') ? "spades" : "clubs";
        }
    }
    else
    {

    }
    return 0;
}