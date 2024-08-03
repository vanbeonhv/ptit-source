#include<bits/stdc++.h>
using namespace std;

void inMh(int A[], int step){
	cout << "Buoc " << step << ": ";
	for(int i = 0; i < step; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void bubbleSort(int A[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(A[j] > A[j + 1]){
				swap(A[j], A[j + 1]);
			}
		}
		inMh(A, i + 1);
	}
} 

int main(){
	int n; cin >> n;
	int A[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	
	bubbleSort(A, n);
	
//	for(int i = 0; i < n; i++) cout << A[i] << " ";
	
	return 0;
}