#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<char> st;
    string str;
    int total = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')' and str[i - 1] == '(')
        {
            st.pop();
            total += st.size();
        }
        else
        {
            total++;
            st.pop();
        }
    }
    cout << total;
}
