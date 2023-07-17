#include<bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c, s; 
	cout<<"a = "; cin>>a;
	cout<<"b = "; cin>>b;
	cout<<"goc c = "; cin>>c;
	c = c * M_PI/180; // 1rad = 1deg*M_PI/180;
	s = 1.0/2*a*b*sin(c);
	cout<<"result: "<<s;
	return 0;
}
