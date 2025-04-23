#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    int count; std::cin >> count; std::vector<std::vector<int>> cars(count, std::vector<int>(2));
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin >> cars[i][j];
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == j)
            {
                continue;
            }
            // std::cout << cars[i][0] << '>' << cars[j][0] << ' ' << cars[i][1] << '<' << cars[j][1] << '\n';
            if (cars[i][0] > cars[j][0] && cars[i][1] < cars[j][1])
            {
                result++;
            }
        }
    }
    std::cout << result;
    return 0;
}