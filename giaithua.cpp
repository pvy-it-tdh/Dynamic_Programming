#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int n;
    cin >> n;
    int f[10000001];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = (1LL * f[i - 1] * i) % mod;
    }
    cout << f[n];
    return 0;
}