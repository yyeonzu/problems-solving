#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> dp;

	int n, temp;

	cin >> n;

	dp.push_back(0);
	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(1);

	for (int i = 4; i <= n; i++)
	{
		if (i % 2 == 0 && i % 3 == 0)
		{
			temp = min(dp[i - 1], min(dp[i / 3], dp[i / 2])) + 1;
		}
		else if (i % 2 == 0)
		{
			temp = min(dp[i - 1], dp[i / 2]) + 1;
		}
		else if (i % 3 == 0)
		{
			temp = min(dp[i - 1], dp[i / 3]) + 1;
		}
		else
			temp = dp[i - 1] + 1;
		dp.push_back(temp);
	}

	cout << dp[n];

	return 0;
}
