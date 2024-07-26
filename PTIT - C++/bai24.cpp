#include<bits/stdc++.h>
using namespace std;

class maTran{
	int N, M, A[10][10], B[10][10];
	public:
		void nhap(){
			cin >> N >> M;
			for(int i = 0; i < N; i++){
				for(int j = 0; j < M; j++){
					cin >> A[i][j];
				}
			}
		}
		
		void chuyenVi(){
			for(int j = 0; j < M; j++){
				for(int i = 0; i < N; i++){
					cout << A[i][j] << " ";
				}
				cout << endl;
			}
		}
};

int main(){
	maTran mt;
	mt.nhap();
	mt.chuyenVi();
	
	return 0;
}