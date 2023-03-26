#include <iostream>
#include <stack>

using namespace std;



// find: 아직 찾지 않았다면 무조건 고정!
// pop하면 그 때 cin으로 다시 find 찾아오기
// pop -> cin >> find;
// 이건 반드시 지켜서 풀어야 할 듯?

int main()
{
	int n;
	int find;
	stack<int> st;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> find;
		st.push(i);
		cout << "+\n";
		if (st.top() == find)
		{
			st.pop();
			cout << "-\n";
			cin >> find;
			while (st.top() != find)
			{
				st.pop();
				cout << "-\n";
				cin >> find;
			}
		}
	}
}