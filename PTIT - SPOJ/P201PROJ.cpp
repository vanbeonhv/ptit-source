#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

int getNums(int x) {
  int res = 0;
  while (x % 10) {
    res++;
    x /= 10;
  }
  return res;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int k;
  cin >> k;

  while (k--) {
    int cnt = 0;
    int a, b;
    cin >> a >> b;
    for (int i = 1; i <= a; i++) {
      for (int j = 1; j <= b; j++) {
        string sab = to_string(i) + to_string(j);
        int ab = stoi(sab);
        // int ab = i * pow(10, getNums(i));
        if (i * j + i == ab) cnt++;
      }
    }
    cout << cnt << endl;
  }
}