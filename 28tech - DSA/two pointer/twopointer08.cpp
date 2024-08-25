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

  int n, k;
  cin >> n >> k;
  int a[n];
  for (int &x : a) cin >> x;

  int left = 0, cnt = 0;
  unordered_set<int> freq;

  for (int right = 0; right < n; right++) {
    freq.insert(a[right]);

    while (freq.size() > k) {
      freq.erase(a[left]);

      int duplicated_left = a[left];
      while (duplicated_left == a[left]) {
        left++;
      }
    }
    cnt += right - left + 1;
  }

  cout << cnt;
}