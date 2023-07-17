#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"n = "; cin>>n;
	double x, rs; cout<<"x = "; cin>>x;
	rs = pow(3, n) + 5*fabs(x) + log(3*x); //log a(b) = log(b)/log(a)
	cout<<"result a): "<<rs<<endl;
	double a, b, c;
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"c = "; cin>>c;
	double p = (a+b+c)/2;
	rs = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"result b) "<<rs;
	return 0;
}
