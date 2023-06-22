#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int price[1002];
	int dp[1002];

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> price[i];
	}
	dp[0] = 0;
	dp[1] = price[1];

	for (int i = 2; i <= N; i++)
	{
		dp[i] = 0;
		for (int j = 1; j <= i; j++)
		{
			dp[i] = max(dp[i], dp[i - j] + price[j]);
		}
	}
	cout << dp[N];

	return 0;
}