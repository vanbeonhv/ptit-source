#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int n,a[20] = {0};
int p[20];
int isFinal = 0;
ll min_gap = LONG_MAX;

void generate(){
    int i = n - 1;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }

    if(i == 0){
        isFinal = 1;
    } else{
        a[i] = 1;
    }
}

void check(){
    ll x = 0, y = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 0) x += p[i];
        else y += p[i];
    }
    ll gap = abs(x - y);
    min_gap = min(gap, min_gap);
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    cin >> n;
    for(int i = 0; i < n; i++) cin >> p[i];

    while(isFinal == 0){
        generate();
        check();
    }
    cout << min_gap;

}