#include<bits/stdc++.h>

using namespace std;

class soNguyen{
	int N, A[100];
	public: getN(){
		return N;
	}
	
	public: nhap(){
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> A[i];
		}
	}
	
	public: daoNguoc(int B[]){
		for(int i = 0; i < N; i++){
			B[N - i - 1] = A[i];
		}
	}
};

int main(){
	soNguyen d;
	d.nhap();
	int B[100];
	d.daoNguoc(B);
	for(int i = 0; i < d.getN(); i++){
		cout << B[i] << " ";
	}
	cout << endl;
	return 0;
}
