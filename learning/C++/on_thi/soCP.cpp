#include<bits/stdc++.h>
using namespace std;

string scp(int n) {
	if(sqrt(n)*sqrt(n)==n) {
		return "dung";
	}
	return "sai";
}

int main() {
	int n; cin>>n;
	cout<<scp(n);
	return 0;
}
