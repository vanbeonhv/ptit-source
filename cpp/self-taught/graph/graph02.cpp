#include <bits/stdc++.h>

using namespace std;
int n;

int main() {
#ifndef ONLINE_JUDGE
  freopen("../../input.txt", "r", stdin);
  freopen("../../output.txt", "w", stdout);
#endif

  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    string line;
    getline(cin, line);

    stringstream ss(line);

    int number;
    vector<int> numbers;
    while (ss >> number) {
      numbers.push_back(number);
    }

    for (int num : numbers) {
      cout << num << " ";
    }
    cout << endl;
  }
}