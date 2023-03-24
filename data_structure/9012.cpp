#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int 	T;
	int		vps;
	string	ps;

	cin >> T;
	while (T--)
	{
		stack <char> st;
		vps = 1;
		cin >> ps;
		for (int i = 0; ps[i]; i++)
		{
			if (ps[i] == '(')
				st.push(ps[i]);
			else
			{
				if (!st.empty())
					st.pop();
				else
				{
					vps = 0;
					break;
				}
			}
		}
		if (st.empty() && vps)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}