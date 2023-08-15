#include<iostream>
using namespace std;

struct sinhvien{
	string msv,ten;
	float diem;
};
int n;
sinhvien a[1000];

void nhap(){
	for (int i = 0;i < n;i++){
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin,a[i].msv);
		cout << "Nhap Ten SV: "; getline(cin,a[i].ten);
		cout << "Nhap Diem: "; cin >> a[i].diem;
	}
}

void xuat(){
	cout << "Danh sach SV:";
	for (int i = 0;i < n;i++){
		cout << endl << a[i].msv << "\t" << a[i].ten << "\t" << a[i].diem;
	}
}

void diemcao(){
	float max =a[0].diem;
	cout << "\nCac Sinh vien co diem cao nhat:";
	for (int i = 0;i < n;i++){
		if (a[i].diem > max){
			max = a[i].diem;
		}
	}
	for (int i = 0;i < n;i++){
		if (max == a[i].diem){
			cout << endl << a[i].msv << "\t" << a[i].ten << "\t" << a[i].diem;
		}
	}
}
int main(){
	do{
		cout << "Nhap so sinh vien n = "; cin >> n;
	}while(n <= 0);
	nhap();
	xuat();
	diemcao();
	return 0;
}
