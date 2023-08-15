#include <iostream>
#include <cstring>

using namespace std;

struct Sinhvien {
	char masv[10];
	string ten;
	float diem;
};

struct SV {
	Sinhvien s;
	SV *next;
};
typedef struct SV* sv;

sv khoi_tao2() {
	cin.ignore();
	Sinhvien s;
	cout << "MaSV: ";
	cin >> s.masv;
	cin.ignore();
	cout << "Ten: ";
	getline(cin, s.ten);
	cout << "Diem: ";
	cin >> s.diem;
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

void them_tt2(sv &a) {
	sv tmp = khoi_tao2();
	if (a == NULL) {
		a = tmp;
	} else {
		sv p = a;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

sv khoi_tao() {
	cin.ignore();
	Sinhvien s;
	cout << "Nhap Ma SV: ";
	cin >> s.masv;
	cin.ignore();
	cout << "Nhap ten SV: ";
	getline(cin, s.ten);
	cout << "Diem: ";
	cin >> s.diem;
	sv tmp = new SV();
	tmp->s = s;
	tmp->next = NULL;
	return tmp;
}

void them_tt(sv &a) {
	sv tmp = khoi_tao();
	if (a == NULL) {
		a = tmp;
	} else {
		sv p = a;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void xuat(Sinhvien s) {
	cout << s.masv << "\t" << s.ten << "\t" << s.diem << endl;
	}

void xuat_ds(sv a) {
	cout << "In danh sach:" << endl;
	while (a != NULL) {
		xuat(a->s);
		a = a->next;
	}
}

void them_vao_giua(sv &a, int idx, int n) {
	if (n == idx - 1) {
		them_tt2(a);
		return;
	}
	sv p = a;
	for (int i = 0; i < idx - 1; i++) {
		p = p->next;
	}
	sv tmp = khoi_tao2();
	tmp->next = p->next;
	p->next = tmp;
}

int main() {
	sv a = NULL;
	cout << "Cho so phan tu n = ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		them_tt(a);
	}
	xuat_ds(a);
	cout << "Cho thong tin 1 SV: " << endl;
	if (n == 0) {
		them_tt2(a);
	} else {
		them_vao_giua(a, 1, n);
	}
	cout << "Hay them x vao vi tri thu 2!" << endl;
	xuat_ds(a);
	
	return 0;
}
