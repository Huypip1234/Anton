#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"N = "; cin>>n;
	double s=0;
	for(int i=n; i>=1; i--) {
		s=sqrt(i+s);
	}
	cout<<"F(n) = "<<s;
	return 0;
}
