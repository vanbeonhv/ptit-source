#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void xuatKq(int step){
	cout << "Buoc " << step  << ": ";
	for(int i = 0; i <= step; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void sapXepNoiBot(){
	for(int i = 0; i < n - 1; i++){
		for(int j = 1; j < n - i; j++){
			if(a[j] < a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
		xuatKq(i + 1);
	}
}

void sapXepChon(){
	cout << "Buoc 0: " << a[0] << endl;
	for(int i = 0; i < n - 1; i++){
		int minPos = i;
		for(int j = i + 1; j < n; j++){
			if(a[j] < a[minPos]){
				minPos = j;
			}
		}
		swap(a[i],a[minPos]);
		xuatKq(i + 1);
	}
}

void sapXepChen(){
	cout << "Buoc 0: " << a[0] << endl;
	for(int i = 1; i < n; i++){
		int j = i - 1;
		int key = a[i];
		while(j >= 0 && key < a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
		xuatKq(i);
	}
}


int main(){
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
//	sapXepNoiBot();
//	sapXepChon();
	sapXepChen();
	return 0;
}