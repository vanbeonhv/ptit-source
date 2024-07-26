#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	while(b != 0) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

struct PhanSo {
	int tu, mau;
};

void rutGon(PhanSo &x) {
	int ucln = gcd(x.tu, x.mau);
	x.tu = x.tu / ucln;
	x.mau = x.mau / ucln;
}

class TinhPhanSo {
	private:
		PhanSo p, q, tong, thuong;
	public:
		PhanSo getPhanSoP() {
			return p;
		}

		PhanSo getPhanSoQ() {
			return q;
		}

		PhanSo getPhanSoTong() {
			return tong;
		}

		PhanSo getPhanSoThuong() {
			return thuong;
		}
		
		void nhap() {
			cin >> p.tu >> p.mau >> q.tu >> q.mau;
		}

		void rutGonHaiPhanSo() {
			rutGon(p);
			rutGon(q);
		}

		void quyDong() {
			int mauChung = lcm(p.mau, q.mau);

			p.tu *= mauChung / p.mau;
			p.mau = mauChung;
			q.tu *= mauChung / q.mau;
			q.mau = mauChung;
		}

		void tinhTong() {
			tong.tu = p.tu + q.tu;
			tong.mau = p.mau;
			rutGon(tong);
		}

		void inPhanSo(PhanSo x) {
			cout << x.tu << '/' << x.mau << " ";
		}

		void tinhThuong() {
			thuong.tu = p.tu * p.mau;
			thuong.mau = p.mau * q.tu;
			rutGon(thuong);
		
};

int main() {
	int k;
	cin >> k;
	for(int i = 1; i <= k; i++) {
		TinhPhanSo tps;
		tps.nhap();
		tps.rutGonHaiPhanSo();
		tps.quyDong();
		tps.tinhTong();
		tps.tinhThuong();

		PhanSo p = tps.getPhanSoP();
		PhanSo q = tps.getPhanSoQ();
		PhanSo tong = tps.getPhanSoTong();
		PhanSo thuong = tps.getPhanSoThuong();

		cout << "Case #" << i << ":\n";
		tps.inPhanSo(p);
		tps.inPhanSo(q);
		cout << endl;
		tps.inPhanSo(tong);
		cout << endl;
		tps.inPhanSo(thuong);
		cout << endl;
	}

	return 0;
}