#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  ll k;
  map<char, ll> mp;
  string s;
  cin >> k >> s;
  for (char c : s) {
    mp[c]++;
  }
  priority_queue<ll> Q;
  for (auto p : mp) {
    Q.push(p.second);
  }

  if (k > Q.size()) {
    cout << 0;
  } else {
    while (k--) {
      ll a = Q.top();
      Q.pop();
      a--;
      Q.push(a);
    }
  }

  ll res = 0;
  while (Q.size() > 0) {
    res += Q.top() * Q.top();
    Q.pop();
  }
  cout << res;
}
