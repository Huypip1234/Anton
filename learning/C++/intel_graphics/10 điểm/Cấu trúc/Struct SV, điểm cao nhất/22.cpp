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
int main(){
    Sinhvien ds[100];
    int n;
    nhap(ds,n);
    cout<<"Danh sach SV:";
    for(int i=0;i<n;i++){
        xuat(ds,i);
    }
    cout<<"\nCac Sinh vien co diem cao nhat:";
    float max = ds[0].diem;
    for(int i=0;i<n;i++){
        if(max < ds[i].diem){
            max = ds[i].diem;
        }
    }
    for(int i=0;i<n;i++){
        if(max == ds[i].diem){
            xuat(ds,i);
        }
    }
    return 0;
}