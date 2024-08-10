#include<bits/stdc++.h>
using namespace std;


void inKq(int A[], int step){
	cout << "Buoc " << step << ": ";
	for(int i = 0; i <= step; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void sapXep(int A[], int n) {
	for(int i = 0 ; i < n; i++) {
		int minNum = i;
		int minIndex = A[i];
		for(int j = i + 1; j < n; j++) {
			if(A[j] < minIndex) {
				minNum = j;
				minIndex = A[j];
			}
		}
		swap(A[i], A[minNum]);
		inKq(A, i);
	}
}



int main() {
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}

	sapXep(A, n);
	return 0;
}
