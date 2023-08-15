#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Sinhvien{
    string masv;
    string hoten;
    float diem;
};
void nhap(Sinhvien ds[], int &n){
    do{
        cout<<"Nhap so sinh vien n = ";cin>>n;
    }while(n<=0);
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Nhap Ma SV: ";getline(cin,ds[i].masv);
        cout<<"Nhap Ten SV: ";getline(cin,ds[i].hoten);
        cout<<"Nhap Diem: ";cin>>ds[i].diem;
    }
}
void xuat(Sinhvien ds[], int i){
    cout<<endl<<ds[i].masv<<"\t"<<ds[i].hoten<<"\t"<<ds[i].diem;
}
void xuatDS(Sinhvien ds[], int n){
    cout<<"Danh sach SV da nhap:";
    for(int i=0;i<n;i++){
        xuat(ds,i);
    }
    cout<<"\nCac Sinh vien co Hoc luc Kha:";
    for(int i=0;i<n;i++){
        if(ds[i].diem >= 2.5 && ds[i].diem < 3.2){
            xuat(ds,i);
        }
    }
    cout<<"\nCac Sinh vien co Hoc luc Gioi/Xuat sac:";
    for(int i=0;i<n;i++){
        if(ds[i].diem >= 3.2){
            xuat(ds,i);
        }
    }
}
int main(){
    Sinhvien ds[100];
    int n;
    nhap(ds,n);
    xuatDS(ds,n);
    return 0;
}