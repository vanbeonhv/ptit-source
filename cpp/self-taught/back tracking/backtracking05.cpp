#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int n, m, ans;

pair<int, int> d[2] = {{0, 1}, {1, 0}};

void Try(int u, int v) {
  if (u == n && v == m) ans++;

  for (int i = 0; i <= 1; i++) {
    int u2 = u + d[i].first;
    int v2 = v + d[i].second;
    if (u2 > n || v2 > m) continue;
    Try(u2, v2);
    u2 -= d[i].first;
    v2 -= d[i].second;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n >> m;

  Try(1, 1);
  cout << ans;
}