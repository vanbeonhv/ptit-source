#include <bits/stdc++.h>

using namespace std;
int a[1005][1005];
int n, m;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    a[x][y] = a[y][x] = 1;
  }

  for (int i = 1; i <= n; i++) {
    cout << i << " : ";
    for (int j = 1; j <= n; j++) {
      if (a[i][j] == 1) cout << j << " ";
    }
    cout << endl;
  }
}