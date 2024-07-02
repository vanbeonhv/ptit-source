#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int a[100], check[100], n;

void Try(int x) {
  for (int i = 1; i <= n; i++) {
    if (check[i] == 0) {
      check[i] = 1;
      a[x] = i;
      if (x == n) {
        for (int j = 1; j <= n; j++) cout << a[j] << " ";
        cout << endl;
      } else {
        Try(x + 1);
      }
      check[i] = 0;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  cin >> n;
  Try(1);
}