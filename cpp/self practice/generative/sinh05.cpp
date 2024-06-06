#include<bits/stdc++.h>

using namespace std;

int n, k, a[21] = {0};
int isFinal = 0;


void create(){
	for(int i = 1; i <= k; i++) a[i] = i;
}

void show(){
	for(int i = 1; i <= k; i++) cout << a[i];
	cout << endl;
}

void generate(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}

	if(i == 0){
		isFinal = 1;
	} else {
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    cin >> n >> k;
    create();
    while(isFinal == 0){
    	show();
    	generate();	
    }

}
    