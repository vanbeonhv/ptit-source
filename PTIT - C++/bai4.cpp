#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

bool giamDan(ll n){
	ll b = 10;
	while(n){
		ll a = n % 10;
		if(a > b){
			return false;
		}
		b = a;
		n /= 10;
	}
	return true;
}

int main(){
	int k; cin >> k;
	while(k--){
		ll n; cin >> n;
		if(giamDan(n)){
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
