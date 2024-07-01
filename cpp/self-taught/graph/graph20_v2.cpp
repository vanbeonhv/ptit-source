#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
vector<pair<int, int>> dscanh;
int visited[200005];
int dem = 0;

void nhap() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
    dscanh.push_back({x, y});
  }
}

// x, y canh. neu gap canh x, y thi bo qua
void dfs(int u, int x, int y) {
  visited[u] = 1;
  for (int i : ke[u]) {
    if ((u == x && i == y) || (u == y && i == x)) {
      continue;
    }
    if (!visited[i]) dfs(i, x, y);
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

  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      dem++;
      dfs(i, 0, 0);
    }
  }

  int canh_cau = 0;
  for (auto it : dscanh) {
    int x = it.first, y = it.second;
    memset(visited, 0, sizeof(visited));

    // Dem lai tplt sau khi loai bo canh x, y
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
      if (!visited[i]) {
        cnt++;
        dfs(i, x, y);
      }
    }

    if (cnt > dem) canh_cau++;
  }

  cout << canh_cau;
}