#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N,K;
    queue <int> qu;
    vector <int> ans;

    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        qu.push(i);
    }
    while (!qu.empty())
    {
        for (int i = 0; i < K; i++)
        {
            if (i == K - 1)
            {
                ans.push_back(qu.front());
                qu.pop();
            }
            else
            {
                int temp = qu.front();
                qu.pop();
                qu.push(temp);
            }
        }

    }
    if (ans.size() == 1)
    {
        cout << "<" << ans[0] << ">";
        return 0;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == 0)
            cout << "<" << ans[i] << ", ";
        else if (i == ans.size() - 1)
            cout << ans[i] << ">";
        else
            cout << ans[i] << ", ";
    }
}