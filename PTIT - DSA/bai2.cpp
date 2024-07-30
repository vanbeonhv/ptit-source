#include <bits/stdc++.h>
using namespace std;

struct CanBo {
	long MaSo;
	char HoTen[8];
};

struct Node {
	CanBo Info;
	Node *Next;
};

struct DanhSach {
	Node *PFirst, *PLast;
};

void KhoiTaoDanhSach(DanhSach &ds) {
	ds->PFirst = NULL;
	ds->PLast = NULL;
}

Node *makeNode(CanBo cb) {
	Node *head = new Node();
	head->Info = cb;
	head->Next = NULL;
	return head;
}

bool KiemTraDanhSachRong(DanhSach ds) {
	return ds->PFirst == NULL;
}

void ThemNodeDau(Node **head, CanBo cb, DanhSach &ds) {
	Node *newNode = makeNode(cb);

	if(ds->PFirst == NULL) {
		ds.PFirst = newNode;
		ds.PLast = newNode;

		//Cap nhat node head

	} else {
		newNode->next = ds->PFirst;
	}
	*head = newNode;
}

int main() {
	DanhSach ds;
	Node *head = NULL;
	while (true) {
		int selection;
		cin >> selection;
		switch (selection) {
			case 1:
				KhoiTaoDanhSach(ds);
			case 2:
				if(KiemTraDanhSachRong(ds)) cout << "Danh sach rong\n";
				else cout << "Danh sach khong rong\n";
			case 3:
				CanBo cb;
				cin >> cb.MaSo >> cb.HoTen;


		}
	}
	return 0;
}