#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    int group = 0, card_group = 0, lost = 0; std::cin >> group >> card_group;
    int round = group/2;
    std::vector<std::vector<int>> table(group, std::vector<int>(group));
    std::vector<int> winner; std::vector<int> win_round;
    for (int i = 0; i < group; i++)
    {
        for (int j = 0; j < group; j++)
        {
            std::cin >> table[i][j];
        }
        winner.push_back(i+1);
    }
    int all_round_count = 0;
    while (all_round_count < group/2)
    {
        int plus = 0;
        // first round
        if (all_round_count == 0)
        {
            for (int i = 0; i < round; i++)
            {
                int x = winner[i] - 1, y = winner[i+1] - 1;
                int win = table[x][y];
                win_round.push_back(win); plus++;
            }
        }
        else
        {
            for (int i = 0; i < round; i++)
            {
                int x = win_round[i] - 1, y = win_round[i+1] - 1;
                int win = table[x][y];
                if (x != win)
                {
                    lost = x;
                }
                else if (y != win)
                {
                    lost = y;
                }
                win_round.erase(std::find(winner.begin(), winner.end(), lost));
            }
        }
        all_round_count++; round /= 2;
    }
    std::cout << win_round.front();
    return 0;
}