#include <iostream>
#include <string>
#include <stack>

using namespace std;

// stack STL 사용
int main()
{
    string s;
    int n;
    int push_n;

    stack<int> st;

    cin >> n;

    while (n--)
    {
        cin >> s;
        if (s == "push")
        {
            cin >> push_n;
            st.push(push_n);
        }
        else if (s == "pop")
        {
            if (st.empty())
                cout << -1;
            else
            {
                cout << st.top();
                st.pop();
            }
        }
        else if (s == "size")
            cout << st.size();
        else if (s == "empty")
            cout << st.empty();
        else
        {
            if (st.empty())
                cout << -1;
            else
                cout << st.top();
        }
        cout << "\n";
    }
    return 0;
}
