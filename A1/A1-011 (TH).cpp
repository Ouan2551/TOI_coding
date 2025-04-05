#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string text; cin >> text; int count = text.size();
    vector<int> count_char; vector<char> single_character;
    // input all single character (not input same char)
    for (int i = 0; i < count ; i++)
    {
        bool check = false; int count1 = single_character.size();
        for (int j = 0; j < count1; j++)
        {
            if (text[i] == single_character[j])
            {
                check = true; break;
            }
        }
        if (check == false)
        {
            single_character.push_back(text[i]);
        }
    }
    // count character in text nad output that count
    int count1 = single_character.size();
    for (int i = 0; i < count1; i++)
    {
        int check = 0;
        for (int j = 0; j < count; j++)
        {
            if (single_character[i] == text[j])
            {
                check++;
            }
        }
        cout << check << single_character[i];
    }
    return 0;
}