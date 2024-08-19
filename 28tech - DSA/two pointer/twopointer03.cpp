#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int n, m;
  cin >> n >> m;
  int a[n], b[m];

  for (int &x : a) cin >> x;
  for (int &x : b) cin >> x;

  int i = 0, j = 0;
  ll cnt = 0;

  while (i < n && j < m) {
    if (a[i] == b[j]) {
      int d1 = 0, d2 = 0;
      int x = a[i];
      while (i < n && a[i] == x) {
        i++;
        d1++;
      }
      while (j < m && b[j] == x) {
        j++;
        d2++;
      }
      cnt += 1ll * d1 * d2;
    } else if (a[i] < b[j]) {
      i++;
    } else {
      j++;
    }
  }
  cout << cnt;
}
