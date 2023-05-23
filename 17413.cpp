#include <iostream>
#include <string>
#include <stack>

using namespace std;

// <> 태그 내부에 있으면 단어를 뒤집지 않고, 태그 외부에 있는 단어만 단어끼리 뒤집는다

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    stack<char> st;

    int i = 0;

    getline(cin, str);
    while (str[i])
    {
        if (str[i] == '<')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            while (str[i] != '>')
            {
                cout << str[i];
                i++;
            }
            cout << str[i];
        }
        else if (isalnum(str[i]))
        {
            st.push(str[i]);
        }
        else if (str[i] == ' ')
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << " ";
        }
        i++;
    }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    return 0;
}
