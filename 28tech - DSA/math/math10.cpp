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

  int t;
  cin >> t;
  ll tich = 1;
  while (t--) {
    int p, e;
    cin >> p >> e;
    tich *= (e + 1) % MOD;
    tich %= MOD;
  }
  cout << tich;
}