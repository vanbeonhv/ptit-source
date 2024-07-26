#include<bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
	string result;
	for(char c: s) {
		result += tolower(c);
	}
	return result;
}

int main() {

	unordered_map<string, int> wordCount;
	vector<string> order;

	string line;
	getline(cin,line);
	line = toLowerCase(line);
	
	stringstream ss(line);
	string temp;
	while(ss >> temp) {
		if(wordCount[temp] == 0) {
			order.push_back(temp);
		}
		wordCount[temp]++;
	}
	
	for(string w: order){
		cout << w << " " << wordCount[w] << endl;
	}
	return 0;
}