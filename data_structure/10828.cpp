// stack STL을 사용하면 된다

#include <iostream>
#include <string>
#include <stack>

using namespace std;

// push, pop, size, empty, top을 구현

// 명령 개수로 while문돌리기
// cin의 값에 따라 stack의 메서드 사용하기

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
                cout << 0;
            else
                st.pop();
        }
        else if (s == "size")
        {
            cout << st.size();
        }
        else if (s == "empty")
        {
            cout << st.empty();
        }
        else
        {
            if (st.empty())
            {
                cout << -1;
            }
            else
            {
                cout << st.top();
            }
        }
        cout << "\n";
    }
    return 0;
}
