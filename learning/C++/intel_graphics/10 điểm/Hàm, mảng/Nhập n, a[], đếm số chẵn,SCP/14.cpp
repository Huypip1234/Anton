#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void nhap(int a[], int &n){
    do{
        cout<<"Nhap n = ";cin>>n;
    }while(n<=4 || n>=20);
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"] = ";cin>>a[i];
    }
}
void xuat(const int a[], int n){
    cout<<"\nDay so:";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}
void so_chan(const int a[], int n){
    int count = 0;
    cout<<endl<<"\nIn so chan:";
    for(int i=0;i<n;i++){
        if(a[i] % 2 == 0){
            cout<<" "<<a[i];
            count ++;
        }
    }
    cout<<"\nDay co "<<count<<" so chan!";
}
bool chinhphuong(int x){
   for(int i=0;i<x;i++){
       if(i*i == x){
           return true;
       }
   }
    return false;
}
void chinhphuong(const int a[], int n){
    int count = 0;
    cout<<"\nIn so chinh phuong:";
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i])){
            cout<<" "<<a[i];
            count++;
        }
    }
    cout<<"\nDay co "<<count<<" so chinh phuong!";
}
int main(){
    int a[100], n;
    nhap(a,n);
    xuat(a,n);
    so_chan(a,n);
    chinhphuong(a,n);
    return 0;
}
