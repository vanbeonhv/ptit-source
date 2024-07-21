#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

#define EL "\n"

int gcd(int a, int b) {
  while (b) {
    int t = b;
    b = a % b;
    a = t;
  }

  return a;
}

int find_max_gcd(vector<int>& num) {
  int max_gcd = 0;
  int n = num.size();

  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      max_gcd = max(max_gcd, gcd(num[i], num[j]));
    }
  }

  return max_gcd;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vi num(n);

    for (int i = 0; i < n; ++i) cin >> num[i];

    cout << find_max_gcd(num) << EL;
  }

  return 0;
}
