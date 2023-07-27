#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<double>a;
	double k;
	int n, count=0;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"A["<<i<<"]"<<" = ";
		cin>>k;
		a.push_back(k);
	}
	cout<<"Cac phan tu o vi tri chan:";
	for(int i=0; i<n; i++) {
		if(i%2==0) {
			cout<<" "<<a[i];
		}
	}
	return 0;
}
