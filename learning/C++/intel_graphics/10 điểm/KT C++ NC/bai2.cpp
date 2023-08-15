#include<iostream>
using namespace std;
struct SinhVien
{
	string MaTS;
	string Hoten;
	float Diem;
};
void nhap(SinhVien ds[],int n)
{
	for(int i=0;i<n;i++){
	cin.ignore();
	cout<<"Nhap Ma SV: ";getline(cin,ds[i].MaTS);
	cout<<"Nhap Ten SV: ";getline(cin,ds[i].Hoten);
	cout<<"Nhap Diem: ";cin>>ds[i].Diem;
	}
}
void xuat(SinhVien ds[],int n)
{
	cout<<"Danh sach Sinh vien:\n";
	for(int i=0;i<n;i++)
	{
		cout<<ds[i].MaTS<<"\t"<<ds[i].Hoten<<"\t"<<ds[i].Diem<<endl;
	}
}
void swap(SinhVien *sv1, SinhVien *sv2)
{
	SinhVien sv=*sv1;
	*sv1=*sv2;
	*sv2=sv;
}
void sapxepdiem(SinhVien ds[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(ds[i].Diem>ds[j].Diem)
				swap(ds[i],ds[j]);
}
int main()
{
	SinhVien ds[100];
	int n;
	cout<<"Nhap so sinh vien n = ";cin>>n;
	nhap(ds,n);
	sapxepdiem(ds,n);
	xuat(ds,n);
	return 0;
}
