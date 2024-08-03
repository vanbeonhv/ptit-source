#include<bits/stdc++.h>
using namespace std;

int n, A[100];

void xuatKq(int step){
	cout << "Buoc " << step << ": ";
	for(int i = 0; i <= step; i++){
		cout << A[i] << " ";
	}
	cout<< endl;
}

void insertionSort() {
	cout << "Buoc 0: " << A[0] << endl;
	
	for(int i = 1; i < n; i++) {
		int key = A[i];
		int pos = i - 1;
		while(pos >= 0 && key < A[pos]) {
			A[pos + 1] = A[pos];
			pos--;
		}
		A[pos + 1] = key;
		xuatKq(i);
	}
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}

	insertionSort();

//	for(int i = 0; i < n; i++) cout << A[i] << " ";
	return 0;
}