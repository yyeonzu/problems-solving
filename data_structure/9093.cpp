#include <iostream>
#include <stack>

using namespace std;

// cin은 "\n"을 구분자로 처리 -> getline을 사용해 문자열을 처리하자
// stack 초기화에 대하여... 스택을 포인터로 넘겨줄 수도 있나? 찾아보기.

void	print_stack(stack<char> st)
{
	while(!st.empty())
	{
		cout << st.top();
		st.pop();
	}
}

int main()
{ 
	int T;
	string str;
	stack<char> st;

	cin >> T;
	while (T--)
	{
		getline(cin, str);
		for (int i = 0; str[i]; i++)
		{
			if (str[i] == ' ')
			{
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				} 
				cout << " ";
			}
			else
				st.push(str[i]);
		}
		print_stack(st);
	}
	return 0;
}