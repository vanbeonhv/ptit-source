#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int a[n], b[n];
  priority_queue<ll, vector<ll>, greater<ll> > q;
  for (int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    a[i] = x;
    q.push(x);
  }
  for (int i = 0; i < n; i++) {
    b[i] = q.top();
    q.pop();
  }

  bool ok = true;
  for (int i = 0; i < n; i++) {
    bool match = a[i] == b[i] || a[i] == b[n - 1 - i];
    if (!match) {
      ok = false;
      break;
    }
  }
  if (ok)
    cout << "YES";
  else
    cout << "NO";
}
