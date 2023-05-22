#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	int i, n, m;
	vector <char> ans;
	stack<int> st;

	i = 1;
	cin >> n;
	while (n--)
	{
		cin >> m;
		while (i <= m)
		{
			st.push(i);
			ans.push_back('+');
			i++;
		}
		if (st.top() == m)
		{
			st.pop();
			ans.push_back('-');
		}
		else
		{
			cout << "NO" << "\n";
			return 0;
		}
	}
	for (int j = 0; j < ans.size(); j++)
		cout << ans[j] << "\n";
}