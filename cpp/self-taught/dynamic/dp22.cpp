#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

ll F[20];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  string s;
  cin >> s;
  s = "0" + s;
  ll sum = 0;
  for (int i = 1; i < int(s.size()); i++) {
    F[i] = F[i - 1] * 10 + (s[i] - '0') * i;
    sum += F[i];
  }
  cout << sum;
}