#include <iostream>
#include <vector>
using namespace std;
void output_char(char a, int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << a;
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int num; cin >> num;
    int divide[7] = {1000, 500, 100, 50, 10, 5, 1}; int index_divide = 0;
    vector<int> store_num;
    while (num > 0)
    {
        int result = num /divide[index_divide];
        if (result > 0)
        {
            store_num.push_back(result); index_divide++;
        }
        
    }
    
    return 0;
}