#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"N = "; cin>>n;
	if(n%400==0) {
		cout<<n<<" la nam nhuan";
		return 0;
	}
	if(n%4==0 && (n%100!=0)) {
		cout<<n<<" la nam nhuan";
		return 0;
	}
	cout<<n<<" khong phai nam nhuan";
	return 0;
}
