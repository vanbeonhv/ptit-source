#include<bits/stdc++.h>
using namespace std;

int n, ok, a[100];

void xuatKq() {
	for(int i = 1; i <= n; i++) cout << a[i];
	cout << endl;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	
	if(i == 0){
		ok = 0;
	} else {
		a[i] = 1;
	}
}

int main() {
	cin >> n;
	ok = 1;
	while(ok) {
		xuatKq();
		sinh();
	}
	return 0;
}