#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"N = "; cin>>n;
	int a=0, t=1;
	for(int i=1; i<n; i++) {
		t=1;
		for(int j=i; j<=i+2; j++) {
			t*=j;
		}
		a+=t;
	}
	cout<<"A = "<<a;
	return 0;
}
