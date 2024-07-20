#include <bits/stdc++.h>

using namespace std;

int n, k, s, cnt, len;

void Try(int pos, int sum) {
  if (len == k) {
    if (sum == s) {
      cnt++;
    }
    return;
  }

  for (int i = pos; i <= n; i++) {
    len++;
    if (sum + i > s) {
      len--;
      continue;
    }

    Try(i + 1, sum + i);
    len--;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n >> k >> s;
  Try(1, 0);
  cout << cnt;
}