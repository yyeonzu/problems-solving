#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 시간복잡도 O(n^2)
int sol(int n, vector<int> &arr)
{
	vector<int> dp(n + 1, 1);
	int ans = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(ans, dp[i]);
	}
	return ans;
}

int main()
{
	int n;

	cin >> n;
	vector<int> arr(n + 1, 0);
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
	cout << sol(n, arr);
	return 0;
}