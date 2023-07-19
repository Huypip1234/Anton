#include<bits/stdc++.h>
using namespace std;

int main() {
	double x, a0, a1, a2, a3, a4;
	cout<<"X = "; cin>>x;
	cout<<"A0 = "; cin>>a0;
	cout<<"A1 = "; cin>>a1;
	cout<<"A2 = "; cin>>a2;
	cout<<"A3 = "; cin>>a3;
	cout<<"A4 = "; cin>>a4;
	double rs = a0+a1*x+a2*x*x+a3*x*x*x+a4*x*x*x*x;
	cout<<"f(x) = "<<rs;
	return 0;
}
