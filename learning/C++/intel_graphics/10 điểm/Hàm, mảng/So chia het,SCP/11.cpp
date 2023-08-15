#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void nhap(int a[], int &n){
    cout<<"Nhap n = ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"So thu "<<i<<": ";cin>>a[i];
    }
}
void xuat(const int a[], int n){
    cout<<"\nDay so:";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl<<"\nDao nguoc day so:";
    for(int i=n-1;i>=0;i--){
        cout<<" "<<a[i];
    }
}
bool chinhphuong(int x){
    if(sqrt(x) == floor(sqrt(x))){
        return true;
    }
    return false;
}
void chiahet(const int a[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i] % 3 == 0){
            count ++;
        }
    }
    cout<<"\nDay co "<<count<<" so chia het cho 3.";
}
void chinhphuong(const int a[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i])){
            count ++;
        }
    }
    cout<<"\nDay co "<<count<<" so chinh phuong.";
}
int main(){
    int a[100], n;
    nhap(a,n);
    xuat(a,n);
    chiahet(a,n);
    chinhphuong(a,n);
    return 0;
}
