#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void nhap(int a[], int &n){
    do{
        cout<<"Nhap n = ";cin>>n;
    }while(n<=0 || n>=100);
    for(int i=0;i<n;i++){
        cout<<"So thu "<<i+1<<": ";cin>>a[i];
    }
}
void xuat(const int a[], int n){
    cout<<"\nIn day so:";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
void min_max(const int a[], int n){
    int min = a[0];
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }else if(min > a[i]){
            min = a[i];
        }
    }
    cout<<"\n\nSo max = "<<max<<", so min = "<<min;
}
bool nguyento(int x){
    if(x <= 1){
        return false;
    }else{
        for(int i=2;i<=sqrt(x);i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}
void nguyento(const int a[], int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(nguyento(a[i])){
            count++;
        }
    }
    cout<<"\nDay co "<<count<<" so nguyen to.";
}
void TBC(const int a[], int n){
    double tong=0,TBC=0;
    for(int i=0;i<n;i++){
        tong += a[i];
    }
    TBC = double(tong/n);
    cout<<"\nTBC day so: "<<TBC;
}
int main(){
    int a[100], n;
    nhap(a,n);
    xuat(a,n);
    min_max(a,n);
    nguyento(a,n);
    TBC(a,n);
    return 0;
}