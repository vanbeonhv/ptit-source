#include<bits/stdc++.h>

using namespace std;

class soNguyen{
	int N, A[100]={0};
	public: nhap(){
		cin >> N;
		for(int i = 0; i < N; i++){
			cin >> A[i];
		}
	}
	
	public: soLonNhat(){
		return *max_element(A, A + 100);
	}
	
	public: timViTri(int maxNum, vector<int> &viTri){
		for(int i = 0; i < N; i++){
			if(A[i] == maxNum){
				viTri.push_back(i);
			}
		}	
	}
};

int main(){
	int k; cin >> k;
	while(k--){
		soNguyen d;
		d.nhap();
		int maxNum = d.soLonNhat();
		cout << maxNum << endl;

		vector<int> viTri;
		d.timViTri(maxNum, viTri);
		for(int i: viTri){
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}
