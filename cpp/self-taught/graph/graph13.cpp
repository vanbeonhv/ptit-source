#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> ke[200005];
int visited[200005];

void nhap() {
  cin >> n >> m;
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
  for (int y : ke[x]) {
    if (!visited[y]) {
      DFS(y);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  nhap();
  int dem = 0;
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      DFS(i);
      dem++;
    }
  }

  cout << dem;
}