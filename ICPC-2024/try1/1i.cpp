#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;
const int MOD = 1e9 + 7;

bool isNumber(string s) {
  for (char c : s) {
    if (!isdigit(c)) {
      return false;
    }
  }

  try {
    ll x = stoll(s);
    if (x <= INT_MAX) {
      return false;
    }
    return true;
  } catch (invalid_argument& e) {
    return false;
  } catch (std::out_of_range& e) {
    return false;
  }
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  string line;
  ll sum = 0;

  while (getline(cin, line)) {
    if (isNumber(line)) {
      sum += stoll(line);
      // cout << stoll(line) << endl;
    }
  }
  cout << sum;
}