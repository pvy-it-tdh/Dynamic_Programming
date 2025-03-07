#include <iostream>
using namespace std;
int F[1005][1005];
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                F[i][j] = F[i - 1][j - 1] + 1;
            }
            else
            {
                F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
    }
    cout << F[n][m];
}