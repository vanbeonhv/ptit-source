#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
	if(n <= 1){
		return false;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false; 
	}
	return true;
}

int main(){
	int k; cin >> k;
	while(k--){
		int n; cin >> n;
		if(isPrime(n)){
			cout << "YES\n";
		} else{
			cout << "NO\n";
		}
	}
	return 0;
}