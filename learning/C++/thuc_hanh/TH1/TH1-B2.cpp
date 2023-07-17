#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	double rs, rs2;
	cout<<"x = "; cin>>x;
	cout<<"y = "; cin>>y;
	rs = pow(x, 5) + 5*pow(x, (5.0/3)) - 6;
	cout<<"F: "<<rs<<endl;
	rs2 = x*y-(x*x)+x*(y*y)-pow(y,3);
	cout<<"G: "<<rs2;
	return 0;
}
