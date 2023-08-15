#include<iostream>
using namespace std;

int n;
struct sinhvien{
	string msv,ten;
	float diem;
};

sinhvien a[1000];
void nhap(){
	for (int i = 0;i<n;i++){
		string msv,ten;
		float diem;
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin,a[i].msv);
		cout << "Nhap Ten SV: "; getline(cin,a[i].ten);
		cout << "Nhap Diem: "; cin >> a[i].diem;
	}
}

void xuat(){
	cout << "Danh sach SV da nhap:";
	for (int i = 0;i < n;i++){
		cout << endl << a[i].msv << "\t" << a[i].ten << "\t" << a[i].diem;
	}
}

void kha(){
	cout << "\nCac Sinh vien co Hoc luc Kha:";
	for (int i = 0;i < n;i++){
		if (a[i].diem >= 2.5 && a[i].diem < 3.2){
			cout << endl << a[i].msv << "\t" << a[i].ten << "\t" << a[i].diem;
		}
	}
}

void gioi_xuatsac(){
	cout << "\nCac Sinh vien co Hoc luc Gioi/Xuat sac:";
	for (int i = 0;i < n;i++){
		if (a[i].diem >= 3.2 && a[i].diem <= 4.0){
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
	kha();
	gioi_xuatsac();
	return 0;
}
