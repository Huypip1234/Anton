#include <iostream>
#include <string>
using namespace std;
struct Sinhvien{
	string MaSV;
	string Hoten;
	float Diem;
};
void Nhap(Sinhvien sv[], int &n)
{
	cout<<"Nhap so sinh vien n = "; cin>>n;
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"Nhap Ma SV: "; getline(cin,sv[i].MaSV);
		cout<<"Nhap Ten SV: "; getline(cin,sv[i].Hoten);
		cout<<"Nhap Diem: "; cin>>sv[i].Diem;
	}
}
void hoc_luc(Sinhvien sv[], int n)
{
	double Kha = 2.5;
	double Gioi = 3.0;
	cout<<"Cac Sinh vien co Hoc luc Kha:"<<endl;
	for(int i=0; i<n; i++){
		if(sv[i].Diem>=Kha && sv[i].Diem<=Gioi){
			cout<<sv[i].MaSV<<"\t"<<sv[i].Hoten<<"\t"<<sv[i].Diem<<endl;
		}
	}
	cout<<"Cac Sinh vien co Hoc luc Gioi/Xuat sac:"<<endl;
	for(int i=0; i<n; i++){
		if(sv[i].Diem>Gioi){
			cout<<sv[i].MaSV<<"\t"<<sv[i].Hoten<<"\t"<<sv[i].Diem<<endl;
		}
	}
}
void Xuat(Sinhvien sv[], int n)
{
	cout<<"Danh sach SV da nhap:"<<endl;
	for(int i=0; i<n; i++){
		cout<<sv[i].MaSV<<"\t"<<sv[i].Hoten<<"\t"<<sv[i].Diem<<endl;
	}
}
int main()
{
	Sinhvien sv[100];
	int n;
	Nhap(sv,n);
	Xuat(sv,n);
	hoc_luc(sv,n);
	return 0;
}
