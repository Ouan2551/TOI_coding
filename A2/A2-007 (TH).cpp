#include <iostream>
#include <vector>
int main()
{
    std::ios::sync_with_stdio(0);std::cin.tie(0);std::cout.tie(0);
    int N, M, num; std::cin >> N >> M; std::vector<int> bucket_select;
    std::vector<std::vector<int>> location_bucket(N, std::vector<int>(2));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cin >> location_bucket[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
        std::cin >> num; bucket_select.push_back(num);
    }
    
    return 0;
}