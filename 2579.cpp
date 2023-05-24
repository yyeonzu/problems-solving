#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	int score[301];
	int dp[301];

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> score[i];
	}

	dp[1] = score[1];
	dp[2] = score[1] + score[2];
	dp[3] = max(score[1], score[2]) + score[3];

	for (int i = 3; i <= n; i++)
	{
		dp[i] = max(dp[i - 2], dp[i - 3] + score[i - 1]) + score[i];
	}

	cout << dp[n];
	return 0;
}