#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  int n;
  cin >> n;
  string a[n + 1];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);

  do {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
  } while (next_permutation(a, a + n));
}