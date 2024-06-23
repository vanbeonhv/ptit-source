#include<bits/stdc++.h>
using namespace std;
//Logic bai nay co the su dung backtrack de sinh ra tat ca cac cau  hinh
//Nhung vi N qua lon (1<= N << 200) nen khong the su dung

int main(){
#ifndef ONLINE_JUDGE
	freopen("../../input.txt", "r", stdin);
	freopen("../../output.txt", "w", stdout);
#endif
	int n, s; cin >> n >> s;
	int a[n];
	int F[s + 1] = {0}; F[0] = 1;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		for(int j = s; j >= a[i]; j--){
			if(F[j - a[i]] == 1) F[j] = 1;
		}
	}
	
	if(F[s] == 1) cout << 1;
	else cout << 0;
	
	return 0;                              
}
	
	