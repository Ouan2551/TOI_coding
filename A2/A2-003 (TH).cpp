#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int count, tall_tree; cin >> count; vector<int> trees;
    int left = 0, right = 0, bird_want = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> tall_tree; trees.push_back(tall_tree);
    }
    for (int i = 0; i < count; i++)
    {
        left = trees[i - 1], right = trees[i + 1];
        if (i == 0 && trees[i] > right)
        {
            bird_want++;
        }
        else if (i == count - 1 && trees[i] > left)
        {
            bird_want++;
        }
        else if (trees[i] > right and trees[i] > left)
        {
            bird_want++;
        }
    }
    cout << bird_want;
    return 0;
}