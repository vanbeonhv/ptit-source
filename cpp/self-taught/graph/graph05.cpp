#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, a[1005][1005];
vector<pair<int, int>> dscanh;
vector<int> ke[1005];

void nhap() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }
}

void inDsCanh() {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (a[i][j] == 1) {
        dscanh.push_back({i, j});
        ke[i].push_back(j);
      }
    }
  }
  sort(dscanh.begin(), dscanh.end());

  for (auto it : dscanh) {
    cout << it.first << " " << it.second << endl;
  }
  cout << endl;

  for (int i = 1; i <= n; i++) {
    cout << i << " : ";
    for (int j : ke[i]) cout << j << " ";
    cout << endl;
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
  inDsCanh();
}