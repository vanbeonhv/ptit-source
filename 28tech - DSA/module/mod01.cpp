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
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	
	int n; cin >> n;
	ll tong = 0;
	for(int i = 0; i < n; i++){
		ll x; cin >> x;
		tong += x % MOD;
	}
	
	cout << tong % MOD;
}
