#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

int main(){
#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
#endif
	
	int n, k;
	cin >> n >> k;
	int a[n + 1] = {0};
	a[0] = 1;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(i >= j){
				if(a[i - j] > 0) a[i] = (a[i] + a[i - j]) % MOD; //Neu de bai yeu cau ket qua chia du cho MOD thi tot nhat tung vong lap hay chia du cho MOD luon
			}
		}
	}
	
	cout << a[n];
	return 0;                              
}
