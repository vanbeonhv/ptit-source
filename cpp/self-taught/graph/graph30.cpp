#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ii pair<int, int>

using namespace std;
const int MOD = 1e9 + 7;

int n, s, t, u, v;
int a[1005][1005];
int d[1005][1005];
int visited[1005][1005];

int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

void nhap() {
  cin >> n >> s >> t >> u >> v;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
}

int bfs(int i, int j) {
  visited[i][j] = 1;
  queue<ii> q;
  q.push({i, j});
  while (!q.empty()) {
    ii x = q.front();
    q.pop();
    if (x.first == u && x.second == v) {
      return d[u][v];
    }

    for (int b = 1; b <= 8; b++) {
      int i2 = x.first + dx[b];
      int j2 = x.second + dy[b];
      if (i2 >= 1 && i2 <= n && j2 >= 1 && j2 <= n && !visited[i2][j2]) {
        q.push({i2, j2});
        d[i2][j2] = d[x.first][x.second] + 1;
      }
    }
  }
  return -1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  nhap();
  cout << bfs(s, t);
}