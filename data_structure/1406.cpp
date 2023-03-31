#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int M;
    char cmd, c;
    string s;
    stack<char> left;
    stack<char> right;

    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        left.push(s[i]);
    }

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> cmd;

        if (cmd == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if (cmd == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (cmd == 'B')
        {
            if (!left.empty())
            {
                left.pop();
            }
        }
        else if (cmd == 'P')
        {
            cin >> c;
            left.push(c);
        }
    }
    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }
    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
}