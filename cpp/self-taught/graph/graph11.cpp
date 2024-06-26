#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, s;
vector<int> ke[200005];
int visited[200005];
queue<int> q;

void nhap() {
  cin >> n >> m >> s;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }

  for (int i = 1; i <= n; i++) {
    sort(ke[i].begin(), ke[i].end());
  }
}

void BFS(int u) {
  cout << u << " ";
  q.push(u);
  visited[u] = 1;
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int y : ke[x]) {
      if (!visited[y]) {
        q.push(y);
        cout << y << " ";
        visited[y] = 1;
      }
    }
  }
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
  BFS(s);
}