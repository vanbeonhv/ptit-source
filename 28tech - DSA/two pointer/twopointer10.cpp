#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int twoPointer(int a[], int k, int n) {
  int l = 0, r = n - 1;
  while (l < r) {
    if (a[l] + a[r] == k)
      return 1;
    else if (a[l] + a[r] > k)
      r--;
    else
      l++;
  }
  return 0;
}

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
  sort(a, a + n);
  if (twoPointer(a, k, n))
    cout << "YES";
  else
    cout << "NO";
}