#include <iostream>
using namespace std;
const int maxn = (int)1e7;
int prime[maxn];
void sang()
{
    for (int i = 0; i < maxn; i++)
    {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i < maxn; i++)
    {
        if (prime[i])
        {
            for (int j = i * 2; j < maxn; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int F[1000000];
int main()
{
    sang();
    int dem = 0;
    int n;
    cin >> n;
    for (int i = 0; i <= 1000000; i++)
    {
        if (prime[i])
        {
            dem++;
        }
        F[i] = dem;
    }
    cout << F[n] << endl;
    return 0;
}