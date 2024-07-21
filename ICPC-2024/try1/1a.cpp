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
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  string s;
  getline(cin, s);
  cin.ignore();
  int k;
  cin >> k;
  while (k--) {
    int n;
    cin >> n;
    reverse(s.begin() + n - 1, s.end() - n + 1);
  }
  cout << s;
}