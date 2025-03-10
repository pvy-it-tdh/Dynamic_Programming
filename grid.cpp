#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countPaths(int m, int n)
{
    vector<vector<int>> dp(m, vector<int>(n, 1));
    for (int i = 1; i < m; i++)
    {
        dp[i][0] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        dp[0][i] = 1;
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[m - 1][n - 1];
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << countPaths(m, n);
    return 0;
}