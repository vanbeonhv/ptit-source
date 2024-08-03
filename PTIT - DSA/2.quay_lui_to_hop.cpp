#include<bits/stdc++.h>
using namespace std;

int n, a[100], visited[100];

void xuatKq(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try(int i){
	for(int j = 1 ; j <= n; j++){
		if(visited[j] == 0){
			a[i] = j;
			visited[j] = 1;
			if(i == n){
				xuatKq();
			} else {
				Try(i+1);
			}
			visited[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	Try(1);
	return 0;
}