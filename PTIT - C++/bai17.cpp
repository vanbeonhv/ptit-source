#include<bits/stdc++.h>
using namespace std;

struct MatHang{
	int ma;
	string ten, nhom;
	float giaMua, giaBan;
};

bool compareMatHang(MatHang a, MatHang b){
	return a.giaBan - a.giaMua > b.giaBan - b.giaMua;
}

class khoHang{
	int n;
	vector<MatHang> danhSach;
	public:
		void nhap(int maHang){
			MatHang m;
			m.ma = maHang;
			getline(cin, m.ten);
			getline(cin, m.nhom);
			cin >> m.giaMua >> m.giaBan;
			cin.ignore();
			danhSach.push_back(m);
		}
		
		void sapXep(){
			sort(danhSach.begin(), danhSach.end(), compareMatHang);
		}
		
		void in(){
			for(MatHang m: danhSach){
				float loiNhuan = m.giaBan - m.giaMua;
				cout << m.ma << " " << m.ten << " " << m.nhom << " " << fixed << setprecision(2) << loiNhuan << endl;
			}
		}
};


int main(){
	int k; cin >> k;
	cin.ignore();
	khoHang kh;
	for(int i = 0; i < k; i++){
		kh.nhap(i+1);
	}
	kh.sapXep();
	kh.in();
	return 0;
}
