#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string text = "", output = ""; cin >> text;
    char group_char, value_char;
    if (text.substr(0,2) == "10")
    {
        output += "10 of "; value_char = text[2];
    }
    else
    {
        group_char = text[0]; value_char = text[1];
    }
    switch (group_char)
    {
        case 'A': case 'a' : output += "ace of "; break;
        case 'J': case 'j' : output += "jack of "; break;
        case 'Q': case 'q' : output += "queen of "; break;
        case 'K': case 'k' : output += "king of "; break;
        case '2': output += "2 of "; break;
        case '3': output += "3 of "; break;
        case '4': output += "4 of "; break;
        case '5': output += "5 of "; break;
        case '6': output += "6 of "; break;
        case '7': output += "7 of "; break;
        case '8': output += "8 of "; break;
        case '9': output += "9 of "; break;

    }
    switch (value_char)
    {
        case 'D': case 'd' : output += "diamonds"; break;
        case 'H': case 'h' : output += "hearts"; break;
        case 'S': case 's' : output += "spades"; break;
        case 'C': case 'c' : output += "clubs"; break;
    }
    cout << output;
    return 0;
}