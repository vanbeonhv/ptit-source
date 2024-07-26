#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	int maSv;
	string ten;
	float diemA, diemB, diemC, tongDiem;
};

bool compareSinhVien(SinhVien a, SinhVien b){
	return a.tongDiem < b.tongDiem;
}

class LopHoc{
	int maSvTuTang = 0;
	vector<SinhVien> danhSach;
	public:
		void themMoi(){
			int k; cin >> k;
			cin.ignore();
			cout << "------\nso sinh vien duoc them: " << k << endl;

			while(k--){
				SinhVien sv;
				maSvTuTang++;
				sv.maSv = maSvTuTang;
				getline(cin, sv.ten);
				cin >> sv.diemA >> sv.diemB >> sv.diemC;
				sv.tongDiem = sv.diemA + sv.diemB + sv.diemC;
				cin.ignore();
				danhSach.push_back(sv);
			}
		}
		
		void capNhatDiem(){
			int maSv; cin >> maSv;
			cin.ignore();	
			cout << "------\nma sinh vien duoc sua: " << maSv << endl;
			
			SinhVien sv = danhSach[maSv - 1];
			getline(cin, sv.ten);
			cin >> sv.diemA >> sv.diemB >> sv.diemC;
			cin.ignore();
			sv.tongDiem = sv.diemA + sv.diemB + sv.diemC;
		}
		
		void in(){
			sort(danhSach.begin(), danhSach.end(), compareSinhVien);
			for(SinhVien sv: danhSach){
				cout << sv.maSv << " " << sv.ten << " " << sv.diemA << " " << sv.diemB << " " << sv.diemC << endl;
			}
		}
		
};

int main(){
	LopHoc lh;
	while(true){
		int luaChon;
		cin >> luaChon;
		cin.ignore();
		if(luaChon == 1){
			lh.themMoi();
		} else if(luaChon == 2){
			lh.capNhatDiem();
		} else if(luaChon == 3){
			lh.in();
			break;
		}
	}
	return 0;
}