#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>a;
	int n, k, count=0;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"]"<<" = ";
		cin>>k;
		a.push_back(k);
		if(k<0) {
			count++;
		}
	}
	cout<<"Day A =";
	for(int i=0; i<a.size(); i++) {
		cout<<" "<<a[i];
	}
	cout<<'\n';
	cout<<"So so am trong A: "<<count;
	return 0;
}
