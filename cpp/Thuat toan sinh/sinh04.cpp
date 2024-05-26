#include<bits/stdc++.h>

using namespace std;

int n;
int a[20] = {0};
int final = 0;

void generate() {
    int i = n;
    while (i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }

    if (i == 0) {
        final = 1;
    } else {
        a[i] = 1;
    }
}

void print(){
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) cout << 'B';
        else cout << 'A';
    }
    cout << "\n";
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    while(final == 0){
        print();
        generate();
    }

}