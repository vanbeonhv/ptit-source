#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

ll mod = 1e9 + 7;

ll binpow(ll a, ll n){ // a ^ n;
	if(n == 0){
		return 1;
	}
	
	ll X = binpow(a, n/2); // a^(n/2)
	X = ((X % mod) * (X % mod)) % mod;
	if(n % 2 == 0){
		return X;
	} else {
		return (X * (a % mod)) % mod;
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
	ll a, b;
	cin >> a >> b;
	cout << binpow(a, b);
}
