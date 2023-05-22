#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int N;
    int push_n;
    string cmd;
    queue <int> qu;

    cin >> N;
    while(N--)
    {
        cin >> cmd;
        if (cmd == "push")
        {
            cin >> push_n;
            qu.push(push_n);
        }
        else if (cmd == "pop")
        {
            if (qu.empty())
                cout << -1 << "\n";
            else
            {
                cout << qu.front() << "\n";
                qu.pop();
            }
        }
        else if (cmd == "size")
            cout << qu.size() << "\n";
        else if (cmd == "empty")
            cout << qu.empty() << "\n";
        else if (cmd == "front")
        {
            if (qu.empty())
                cout << -1 << "\n";
            else
                cout << qu.front() << "\n";
        }
        else
            if (qu.empty())
                cout << -1 << "\n";
            else
                cout << qu.back() << "\n";
    }
}