#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  int a[n + 5];
  for (int i = 1; i <= n; i++) a[i] = n - i + 1;
  do {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
  } while (prev_permutation(a + 1, a + n + 1));
}