#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int visited[200005], parent[200005];

void nhap() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }
}

bool bfs(int u) {
  queue<int> q;
  q.push(u);
  visited[u] = true;
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int v : ke[x]) {
      if (visited[v] && v != parent[x]) {
        return true;
      }
      if (!visited[v]) {
        parent[v] = x;
        q.push(v);
        visited[v] = true;
      }
    }
  }
  return false;
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
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      if (bfs(i)) {
        cout << 1;
        return 0;
      }
    }
  }
  cout << 0;
}