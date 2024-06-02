// gready04 but using sort.
// time complexity: O(nlog(n))
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int n, k;
  cin >> n >> k;
  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n, greater<int>());
  int greater;
  if (k > n - k)
    greater = k;
  else
    greater = n - k;

  ll x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (i < greater) {
      x += a[i];
    } else
      y += a[i];
  }
  cout << x - y;
}