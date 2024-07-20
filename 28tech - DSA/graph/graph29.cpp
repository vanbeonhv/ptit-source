#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ii pair<int, int>

using namespace std;
const int MOD = 1e9 + 7;

int n, s, t, u, v;
int a[1000][1000], visited[1000][1000], r[1000][1000];

ii d[8] = {{0, 1},  {1, 1},   {1, 0},  {1, -1},
           {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}};

void nhap() {
  cin >> n >> s >> t >> u >> v;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
};

int bfs(int i, int j) {
  visited[i][j] = true;
  queue<ii> q;
  q.push({i, j});

  while (!q.empty()) {
    ii top = q.front();
    q.pop();
    int i1 = top.first, j1 = top.second;

    if (i1 == u && j1 == v) {
      return r[i1][j1];
    }

    for (int x = 0; x < 8; x++) {
      int i2 = i1 + d[x].first;
      int j2 = j1 + d[x].second;
      if (i2 >= 1 && i2 <= n && j2 >= 1 && j2 <= n && !visited[i2][j2] &&
          a[i2][j2] == 1) {
        visited[i2][j2] = 1;
        r[i2][j2] = r[i1][j1] + 1;
        q.push({i2, j2});
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