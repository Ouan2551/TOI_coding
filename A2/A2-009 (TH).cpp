#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    int group = 0, card_group = 0, round = group/2; std::cin >> group >> card_group;
    std::vector<std::vector<int>> table(group, std::vector<int>(group));
    std::vector<int> winner; std::vector<int> win_round;
    std::cout << "wow";
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
        for (int i = 0; i < round; i++)
        {
            int win = table[i+plus][i+1+plus];
            win_round.push_back(win); plus++;
        }
        all_round_count++; round /= 2;
    }
    // for (int i = 0; i < winner.size(); i++)
    // {
    //     std::cout << winner[ << '\n';
    // }
    std::cout << win_round.back();
    return 0;
}