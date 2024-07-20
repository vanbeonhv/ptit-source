#include <bits/stdc++.h>

using namespace std;
int a[1005][1005];
int n, m;
vector<int> ke[200005];

void nhap() {
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    int x, y;
    cin >> x >> y;
    ke[x].push_back(y);
    ke[y].push_back(x);
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  nhap();
  for (int i = 1; i <= n; i++) {
    sort(ke[i].begin(), ke[i].end());
    cout << i << " : ";
    for (int j : ke[i]) cout << j << " ";
    cout << endl;
  }
}
