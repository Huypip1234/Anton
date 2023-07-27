#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<double>a;
	double k;
	int n, count=0;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"]"<<" = ";
		cin>>k;
		a.push_back(k);
	}
	sort(a.begin(), a.end());
	cout<<"Gia tri nho nhat trong A: "<<a[0];
	return 0;
}
