#include<bits/stdc++.h>
using namespace std;

string chuanHoa(string s){
	string ten;
	for(int i = 0; i < s.size(); i++){
		if(i == 0) ten += toupper(s[i]);
		else ten += tolower(s[i]);
	}
	return ten;
}

int main(){
	int k; cin >> k;
	cin.ignore();
	while(k--){
		string line;
		getline(cin, line);
		stringstream ss(line);
		string temp;
		while(ss >> temp){
			cout << chuanHoa(temp) << " ";
		}
		cout << endl;
	}
	
	return 0;
}