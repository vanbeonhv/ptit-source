#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, s;
vector<int> ke[200005];
int visited[200005];

void nhap() {
  cin >> n >> m >> s;
  for (int i = 1; i <= m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
  }
  for (int i = 1; i <= n; i++) {
    sort(ke[i].begin(), ke[i].end());
  }
}

void DFS(int u) {
  cout << u << " ";
  visited[u] = 1;

  for (int i : ke[u]) {
    if (!visited[i]) {
      DFS(i);
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
  DFS(s);
}