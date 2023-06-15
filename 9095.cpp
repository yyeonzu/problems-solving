#include <iostream>

using namespace std;

int main()
{
	int dp[12] = {
		0,
	};
	int T, n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	cin >> T;

	while (T--)
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
		{
			if (dp[i] == 0)
			{
				dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
			}
		}
		cout << dp[n] << "\n";
	}

	return 0;
}