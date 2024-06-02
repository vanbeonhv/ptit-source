
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  ll n, k;
  cin >> n >> k;

  priority_queue<ll> q;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    q.push(x);
  }

  ll greater;
  ll a = 0, b = 0;

  if (k > n - k)
    greater = k;
  else
    greater = n - k;

  ll i = 0;
  while (!q.empty()) {
    if (i < greater) {
      a += q.top();
    } else {
      b += q.top();
    }
    q.pop();
    i++;
  }
  cout << a - b;
}