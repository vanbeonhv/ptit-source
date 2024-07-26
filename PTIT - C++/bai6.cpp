#include<bits/stdc++.h>

using namespace std;

class soNguyenTo{
	int n, a[100];
	public: nhap(){
		cin >> n;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
	}
	
	private: bool isPrime(int x){
		if(x <= 1){
			return false;
		}
		
		for(int i = 2; i <= sqrt(x); i++){
			if(x % i == 0){
				return false;
			}
		}
		return true;
	}
	
	public: laySoNguyenTo(vector<int> &b){
		for(int i = 0; i < n; i++){
			if(isPrime(a[i])){
				b.push_back(a[i]);
			}
		}
	}
};

int main(){
	int k; cin >> k;
	while(k--){
		soNguyenTo d;
		d.nhap();
		vector<int> b;
		d.laySoNguyenTo(b);
		for(int c : b){
			cout << c << " ";
		}
		cout << endl;
	}
	
	return 0;
}
