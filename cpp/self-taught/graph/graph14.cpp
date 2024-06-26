

#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
vector<int> ke[200005];
int visited[200005];
int parent[200005];

void nhap() {
  cin >> n >> m >> s >> t;
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

void DFS(int x) {
  visited[x] = 1;
  for (int i : ke[x]) {
    if (!visited[i]) {
      DFS(i);
      parent[i] = x;
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
}