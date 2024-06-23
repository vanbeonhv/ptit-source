#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ke[200005];
visited[n + 1];

void nhap() {
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }
}

void DFS(int x) { visited[x] = 1; }

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  nhap();
}