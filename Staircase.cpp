#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int dp[100005];
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            dp[i] += dp[i - j];
            dp[i] %= 1000000007;
        }
    }
    cout << dp[n];
    return 0;
}