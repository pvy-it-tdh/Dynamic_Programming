#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
int fibo[1000001];
int main()
{
    int n;
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % mod;
    }
    cout << fibo[n];
    return 0;
}