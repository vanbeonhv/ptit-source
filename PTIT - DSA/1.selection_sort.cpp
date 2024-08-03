#include<bits/stdc++.h>
using namespace std;

void inMh(int A[], int step){
	cout << "Buoc " << step << ": ";
	for(int i = 0; i < step; i++){
		cout << A[i] << " ";
	}
	cout << endl;
}

void sapXep(int A[], int n){
	for(int i = 0; i < n; i++){
		int minPos = i;
		for(int j = i + 1; j < n; j++){
			if(A[j] > A[minPos]){
				minPos = j;
			}
		}
		swap(A[i], A[minPos]);
		inMh(A, i + 1);
	}
}

int main(){
	int n; cin >> n;
	int A[n];
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	
	sapXep(A, n);
	
	return 0;
}