#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	int maSv;
	string ten, ngaySinh;
	float diem1, diem2, diem3, tongDiem;
};

bool compareSinhVien(SinhVien a, SinhVien b){
	return a.tongDiem > b.tongDiem;
}

class lopHoc{
	int N;
	vector<SinhVien> danhSach;
	public:
		void nhap(int ma){
			SinhVien sv;
			sv.maSv = ma;
			getline(cin, sv.ten);
			getline(cin, sv.ngaySinh);
			cin >> sv.diem1 >> sv.diem2 >> sv.diem3;
			sv.tongDiem = sv.diem1 + sv.diem2 + sv.diem3;
			cin.ignore();
			danhSach.push_back(sv);
		}
		
		void sapXep(){
			stable_sort(danhSach.begin(), danhSach.end(), compareSinhVien);
		}
		
		void in(){
			for(SinhVien sv: danhSach){
				cout << sv.maSv << " " << sv.ten << " " << sv.ngaySinh << " " << fixed << setprecision(1) << sv.tongDiem << endl;
			}
		}
	
};


int main(){
	int k; cin >> k;
	cin.ignore();
	lopHoc lh;
	for(int i = 0 ; i < k; i++){
		SinhVien sv;
		lh.nhap(i+1);
	}
	lh.sapXep();
	lh.in();
	return 0;
}