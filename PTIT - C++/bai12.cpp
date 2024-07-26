#include<bits/stdc++.h>

using namespace std;

class soNguyen{
	int N, A[100];
	public:
		void nhap(){
			cin >> N;
			for(int i = 0; i < N; i++){
				cin >> A[i];
			}
		}
		
		void sapXep(){
			sort(A, A + N);
		}
		
		void in(){
			for(int i = 0; i < N; i++){
				cout << A[i] << " ";
			}
		}
};

int main(){
	soNguyen d;
	d.nhap();
	d.sapXep();
	d.in();
	return 0;
}
