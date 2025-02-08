#include <iostream>
#include <math.h>
using namespace std;
using ll = long long;
ll c[1005][1005];
int mod = 1e9 + 7;
void solve()
{
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                c[i][j] = 1;
            }
            else
            {
                c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
                c[i][j] %= mod;
            }
        }
    }
}
int main()
{
    solve();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}