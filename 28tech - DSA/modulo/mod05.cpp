#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	int n; cin >> n;
	ll a[n];
	a[0] = a[1] = 1;
	ll mod = 1e9 + 7;
	for(int i = 2; i < n; i++){
		a[i] = 2 * a[i-1] + 3 * a[i-2];
		a[i] %= mod;
	}
	cout << a[n - 1];
}
