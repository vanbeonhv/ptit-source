#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

ll mod = 1e9 + 7;

ll binpow(ll a, ll b){
	if(b == 0){
		return 1;
	}
	
	ll x = binpow(a, b/2);
	x = ((x % mod) * (x % mod)) % mod;
	if(b % 2 == 0){
		return x;
	} else{
		return (x * (a % mod)) % mod;
	}
}


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
	for(int i = 1; i <= n; i++){
		tong += binpow(i, i) % mod;
		tong %= mod;
	}
	cout << tong;	
}