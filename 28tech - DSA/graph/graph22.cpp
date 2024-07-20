#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int color[200005];
// 0 - trắng - đỉnh chưa từng thăm
// 1 - xám - đã thăm nhưng dfs vẫn chưa kết thúc, chưa backtrack,
// 2 - đen - đã thăm và dfs đã kết thúc, đã backtrack.

void nhap() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
  }
}

bool dfs(int u) {
  color[u] = 1;
  for (int v : ke[u]) {
    if (color[v] == 1) {
      return true;
    } else if (color[v] == 0) {
      if (dfs(v)) {
        return true;
      }
    }
  }
  color[u] = 2;
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
    if (color[i] == 0) {
      if (dfs(i)) {
        cout << 1;
        return 0;
      }
    }
  }
  cout << 0;
}