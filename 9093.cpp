#include <iostream>
#include <stack>

using namespace std;

// cin은 개행과 공백을 구분자로 처리 -> getline을 사용해 문자열을 처리
// cin : cin.ignore()을 통해 버퍼를 비워준다 -> '\n'이 입력버퍼에 남아있기 때문에 처리
// getline : '\n'이 입력버퍼에 들어가지 않기 때문에 ignore 처리를 해줄 필요가 없다

int main()
{ 
	int T;
	string str;
	stack<char> st;

	cin >> T;
	cin.ignore();
	while (T--)
	{
		getline(cin, str);
		str += ' ';
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
		cout << "\n";
	}
	return 0;
}