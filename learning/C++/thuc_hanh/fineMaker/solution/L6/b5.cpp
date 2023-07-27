#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<int>a;
	int k;
	int n, count=1;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"]"<<" = ";
		cin>>k;
		a.push_back(k);
	}
	sort(a.begin(), a.end(), greater<int>());
	int i=0;
	while(a[i]==a[i+1]) {
		if(i!=(n-1)) {
			count++;
			i++;
		}
	}
	cout<<"Gia tri lon nhat cua A: "<<a[0]<<'\n';
	cout<<"So phan tu co gia tri lon nhat: "<<count<<'\n';
	return 0;
}
