#include<iostream>
using namespace std;

int n;
struct SinhVien{
	string hoten,msv;
	double diem;
};
SinhVien *sv = new SinhVien[100];
void nhap(){
	for (int i = 0;i < n;i++){
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin,sv[i].msv);
		cout << "Nhap Ten SV: "; getline(cin,sv[i].hoten);
		cout << "Nhap Diem: "; cin >> sv[i].diem;
	}
}
void xuat(){
	for (int i = 0;i < n;i++){
		cout << sv[i].msv << "     " << sv[i].hoten << "     " << sv[i].diem << endl;
	}
}
void diemcao(){
	double max = sv[0].diem;
	for (int i = 0;i < n;i++){
		if (max < sv[i].diem){
			max = sv[i].diem;
		}
	}
	for (int i = 0;i < n;i++){
		if (sv[i].diem == max) {
			cout << endl << sv[i].msv << "     " << sv[i].hoten << "     " << sv[i].diem;
		}
	}
}								 
int main(){
	do{
		cout << "Nhap so sinh vien n = "; cin >> n;
	}while (n <= 0);
	nhap();
	cout << "Danh sach SV:" << endl;
	xuat();
	cout << "Cac Sinh vien co diem cao nhat:" << endl;
	diemcao();
	return 0;
}	
