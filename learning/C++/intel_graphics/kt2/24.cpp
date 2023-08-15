#include<iostream>
using namespace std;

struct sinhvien{
	string msv,ten;
	float diem;
};
int n;
sinhvien a[100];
void nhap(){
	for (int i = 0; i < n;i++){
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin,a[i].msv);
		cout << "Nhap Ten SV: "; getline(cin,a[i].ten);
		cout << "Nhap Diem: "; cin >> a[i].diem;
	}
}

void sapxep(){
	cout << "Danh sach Sinh vien:";
	for (int i = 0;i < n - 1;i++){
		for (int j = i + 1;j < n;j++){
			if (a[i].diem > a[j].diem){
				sinhvien temp; 
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}
		}
	}
	for (int i = 0;i < n;i++){
		cout << endl << a[i].msv << "\t" << a[i].ten << "\t" << a[i].diem;
	}
}
int main(){
	do{
		cout << "Nhap so sinh vien n = "; cin >> n;
	}while(n <= 0);
	nhap();
	sapxep();
	return 0;
}
