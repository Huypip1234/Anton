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
void xuat(Sinhvien ds[], int &n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ds[i].diem > ds[j].diem){
                Sinhvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    cout<<"Danh sach Sinh vien:";
    for(int i=0;i<n;i++){
        cout<<endl<<ds[i].masv<<"\t"<<ds[i].hoten<<"\t"<<ds[i].diem;
    }
}
int main(){
    Sinhvien ds[100];
    int n;
    nhap(ds,n);
    xuat(ds,n);
    return 0;
}