#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int n, m;
  cin >> n >> m;
  vector<int> ke[1005];
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
  }

  for (int i = 1; i <= n; i++) {
    sort(ke[i].begin(), ke[i].end());
    cout << i << " : ";
    for (int j : ke[i]) cout << j << " ";
    cout << endl;
  }
}