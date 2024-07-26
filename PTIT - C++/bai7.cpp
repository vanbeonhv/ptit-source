#include<bits/stdc++.h>

using namespace std;

class soNguyen{
	int n, a[100];
	public: nhap(){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
	}
	
	public: bool doiXung(){
		for(int i = 0; i < n / 2; i++){
			if(a[i] != a[n - i - 1]){
				return false;
			}
		}
		return true;
	}
	
};

int main(){
	int k; cin >> k;
	while(k--){
		soNguyen d;
		d.nhap();
		if(d.doiXung()) cout << "YES\n";
		else cout << "NO\n";
	}
	
	return 0;
}
