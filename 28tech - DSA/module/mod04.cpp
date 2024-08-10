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
	int n, m;
	ll k;
	cin >> n >> m >> k;
	ll mod = pow(10, k);
	ll ans = 1;
	n %= mod;
	for(int i = 1; i <= m; i++) {
		ans *= n;
		ans %=  mod;
	}
	cout << ans;
}
