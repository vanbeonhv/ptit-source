#include<bits/stdc++.h>

using namespace std;

class xau{
	string S;
	public:
		void nhap(){
			getline(cin ,S);
		}
		
		string getS(){
			return S;	
		} 
		
		void phanTich(int &alpha, int &digit, int &other){
			for(char c: S){
				if(isdigit(c)) digit++;
				else if(isalpha(c)) alpha++;
				else other++;
			}
		}
};

int main(){
	xau s;
	s.nhap();
	int alpha = 0, digit = 0, other = 0;
	s.phanTich(alpha, digit, other);
	cout << alpha << " " << digit << " " << other;
	return 0;
}
