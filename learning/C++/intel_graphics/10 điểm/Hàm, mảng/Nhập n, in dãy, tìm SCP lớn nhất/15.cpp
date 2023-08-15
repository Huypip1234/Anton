#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void nhap(int a[], int &n){
    do{
        cout<<"So phan tu n = ";cin>>n;
    }while(n<=0);
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
bool chinhphuong(int n){
    if(sqrt(n) == round(sqrt(n))){
        return true;
    }
    return false;
}
void chinhphuong(const int a[], int n){
    int max = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        if(chinhphuong(a[i]) && max < a[i]){
            max = a[i];
            count ++;
        }
    }
    if(count == 0){
        cout<<"\n\nDay khong co so chinh phuong!";
    }else{
        cout<<"\n\nSo chinh phuong lon nhat la: "<<max;
    }
}
int main(){
    int a[100], n;
    nhap(a,n);
    xuat(a,n);
    chinhphuong(a,n);
    return 0;
}
