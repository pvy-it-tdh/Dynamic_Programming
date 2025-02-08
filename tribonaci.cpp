#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int tribonaci[1000001];
int main()
{
    int n;
    cin >> n;
    tribonaci[0] = 0;
    tribonaci[1] = 0;
    tribonaci[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        tribonaci[i] = (tribonaci[i - 1] + tribonaci[i - 2] + tribonaci[i - 3]) % mod;
    }
    cout << tribonaci[n];
    return 0;
}
