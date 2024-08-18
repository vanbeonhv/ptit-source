#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

bool twoSum(int a[], int n, int x, int pos) {
  int l = pos, r = n - 1;

  while (l < r) {
    int sum = a[l] + a[r];
    if (sum == x)
      return true;
    else if (sum > x)
      r--;
    else
      l++;
  }
  return false;
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

  for (int i = 0; i < n - 3; i++) {
    for (int j = i + 1; j < n - 2; j++) {
      if (twoSum(a, n, k - a[i] - a[j], j + 1)) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";
}