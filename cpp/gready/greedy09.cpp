#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  priority_queue<long, vector<long>, greater<long>> Q;
  long n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    long x;
    cin >> x;
    Q.push(x);
  }

  long res = 0;
  while (Q.size() > 1) {
    long a = Q.top();
    Q.pop();
    long b = Q.top();
    Q.pop();
    res += a + b;
    Q.push(a + b);
  }
  cout << res;
}