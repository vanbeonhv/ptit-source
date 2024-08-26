#include <bits/stdc++.h>
#define endl "\n"
#define ll long long

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int x, y;
	cin >> x >> y;
	int left = 0, two = 0, eight = 0, cnt = INT_MIN;
	

	for(int right = 0; right < (int)s.size(); right++) {
		if(s[right] == '2') two++;
		else eight++;

		while(two > x || eight > y) {
			if(s[left] == '2') two--;
			else eight--;
			left++;
		}
		
		cnt = max(right - left + 1, cnt);
	}
	cout << cnt;
}

