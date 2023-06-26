#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int arr[51][51];
int visited[51][51];

// 4방면 탐색시 사용할 방향 배열
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> q;

int n, m, k;

void bfs(int x, int y)
{
	q.push({x, y});
	visited[x][y] = true;
	while (!q.empty())
	{
		int tx = q.front().first;
		int ty = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = tx + dx[i];
			int ny = ty + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (arr[nx][ny] == 1 && !visited[nx][ny])
			{
				q.push({nx, ny});
				visited[nx][ny] = true;
			}
		}
	}
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		cin >> m >> n >> k;
		int cnt = 0;
		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;
			arr[y][x] = 1;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] == 1 && !visited[i][j])
				{
					bfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				arr[i][j] = 0;
				visited[i][j] = false;
			}
		}
	}
}