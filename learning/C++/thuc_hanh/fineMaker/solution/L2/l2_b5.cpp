#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"N = "; cin>>n; //10
	int rs=0, i=1; //1+2+3
	if(n==0) {
		cout<<"m lon nhat = "<<0;
		return 0;
	}
	while(rs<n) {
		rs+=i; //1 //3 //6 //10
		i++; //2 //3 //4
	}
	cout<<"m lon nhat = "<<i-2;
	return 0;
}
