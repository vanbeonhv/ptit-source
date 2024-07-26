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
		
		float trungBinh(){
			int sum = 0;
			for(int i = 0; i < N; i++){
				sum += A[i];
			}
			float soTB = (float)sum / N;
			return soTB;
		}
};

int main(){
	
	soNguyen d;
	d.nhap();
	float soTB = d.trungBinh();
	cout << fixed << setprecision(3) << soTB;
	return 0;
}
