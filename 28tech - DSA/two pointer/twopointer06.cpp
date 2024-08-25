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

  int n, s;
  cin >> n >> s;
  int a[n];
  for (int &x : a) cin >> x;

  int cnt = 0;
  for (int right = 0; right < n; right++) {
    int cur_sum = a[right], left = right;
    while (cur_sum >= s) {
      cnt++;
      if (left == 0) break;

      left--;
      cur_sum += a[left];
    }
  }
  cout << cnt;
}