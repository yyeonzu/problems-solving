#include <iostream>
#define MAX 100000

using namespace std;

long long dp[MAX + 1][4];

int main()
{
    int T, n;

    cin >> T;
    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;
    for (int i = 4; i <= MAX; i++)
    {
        dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
        dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
        dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
    }
    while (T--)
    {
        cin >> n;
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << "\n";
    }
    return 0;
}