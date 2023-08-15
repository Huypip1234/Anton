#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void nhap(int a[], int &n){
    do{
        cout<<"So phan tu n = ";cin>>n;
    }while(n<=0 || n>=20);
    for(int i=0;i<n;i++){
        cout<<"Phan tu thu "<<i+1<<": ";cin>>a[i];
    }
}
void xuat(const int a[], int n){
    cout<<"\nIn day so:";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
void so_max(const int a[], int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    cout<<"\n\nSo max = "<<max;
}
bool chinhphuong(int x){
    if(sqrt(x) == round(sqrt(x))){
        return true;
    }
    return false;
}
void chinhphuong(const int a[], int n){
    int max = 0;
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i]) && max < a[i]){
            max = a[i];
        }
    }
    cout<<"\nSo chinh phuong lon nhat: "<<max;
}
int main(){
    int a[100], n;
    nhap(a,n);
    xuat(a,n);
    so_max(a,n);
    chinhphuong(a,n);
    return 0;
}
