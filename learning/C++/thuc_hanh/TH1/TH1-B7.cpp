#include<bits/stdc++.h>
using namespace std;

int main() {
	int x1, y1, x2, y2, x3, y3;
	cout<<"A(x, y) = "; cin>>x1>>y1;
	cout<<"B(x, y) = "; cin>>x2>>y2;
	cout<<"C(x, y) = "; cin>>x3>>y3;
	int a = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
	int b = sqrt(pow(x3-x2, 2)+pow(y3-y2, 2));
	int c = sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));
	double cv = a+b+c;
	cout<<"Chu vi: "<<cv<<endl;
	double p = (a+b+c)/2;
	double s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich: "<<s;
	return 0;
}
