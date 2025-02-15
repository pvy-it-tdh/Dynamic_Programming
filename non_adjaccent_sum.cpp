#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> dp(n);
    for (int i = 1; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
    }
    cout << *max_element(dp.begin(), dp.end());
}