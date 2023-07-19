#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, rs;
	cout<<"Nhap a = ";cin>>a;
	cout<<"Nhap b = ";cin>>b;
	cout<<"Nhap c = ";cin>>c;
	if(b<=c) {
		rs = a*a+3*a-1;
	} else {
		rs=0;
	}
	cout<<"Y = "<<rs;
	
	return 0;
}
