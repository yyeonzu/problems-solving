#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	int price[10002], dp[10002];

	cin >> N;
	price[0] = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> price[i];
	}
	dp[1] = price[1];
	for (int i = 2; i <= N; i++)
	{
		dp[i] = price[i];
		for (int j = 1; j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j] + price[j]);
		}
	}
	cout << dp[N];
}