#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m;
int a[505][505];
int F[505][505];
void nhap() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
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
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      F[i][j] = max({F[i - 1][j], F[i][j - 1], F[i - 1][j - 1]}) + a[i][j];
    }
  }
  cout << F[n][m];
}