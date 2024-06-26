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
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  cin.ignore();
  vector<int> ke[1005];
  for (int i = 1; i <= n; i++) {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string tmp;
    while (ss >> tmp) {
      int x = stoi(tmp);
      // cout << tmp << endl;
      if (x > i) {
        ke[i].push_back(x);
      }
    }
    sort(ke[i].begin(), ke[i].end());
  }

  for (int i = 1; i <= n; i++) {
    for (int j : ke[i]) {
      cout << i << " " << j << endl;
    }
  }
}