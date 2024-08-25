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
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int n, s;
  cin >> n >> s;
  int a[n];
  for (int &x : a) cin >> x;

  ll cur_sum = 0, cnt = 0;
  int left = 0;

  for (int right = 0; right < n; right++) {
    // Mỗi khi move right thì mặc định các số phía trước con trỏ left đều thỏa
    // mãn. Nên phải cộng cnt với left
    cnt += left;

    cur_sum += a[right];
    // cout << cur_sum << endl;

    while (true) {
      if (cur_sum < s) break;
      cnt++;

      // Thu di chuyen left sang phai xem co t/m ko?
      if (cur_sum - a[left] < s) break;

      cur_sum -= a[left];
      left++;
    }
  }
  cout << cnt;
}