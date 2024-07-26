#include<bits/stdc++.h>

using namespace std;

class soNguyen{
	int N, A[100];
	public: void nhap(){
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> A[i];
		}
	}
	
	public: int timSoNhoNhat(){
		return *min_element(A, A+N);
	}
	
	public: int timSoNhoThuHai(int minNum){
		int secondMinNum = 1000;
		for(int i = 0; i < N; i++){
			if(A[i] < secondMinNum && A[i] != minNum){
				secondMinNum = A[i];
			} 
		}
		return secondMinNum;
	}
};

int main(){
	
	soNguyen d;
	d.nhap();
	int minNum = d.timSoNhoNhat();
	cout << minNum << " " << d.timSoNhoThuHai(minNum);
	return 0;
}
