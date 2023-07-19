#include<bits/stdc++.h>
using namespace std;

int main() {
	int x; cout<<"Nhap x = "; cin>>x;
	if(x==3 || x<0) {
		cout<<"Bieu thuc khong xac dinh";
		return 0;
	}
	double rs = (1+sqrt(x))/(x-3);
	cout<<"Ket qua: "<<rs;
	return 0;
}
