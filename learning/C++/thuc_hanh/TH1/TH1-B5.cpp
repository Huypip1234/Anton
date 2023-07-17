#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; cout<<"Rut bao nhieu? "; cin>>n;
	int namTram=0, haiTram=0, motTram=0, namMuoi=0;
	if(n<50000 || n%50000!=0 || n>5000000) {
		cout<<"Nhap sai!";
		return 0;
	}
	//Tham lam
	if(n>=500000) {
		namTram = n/500000;
		n-=500000*namTram;
	}
	if(n>=200000 && n<500000) {
		haiTram = n/200000;
		n-=200000*haiTram;
	}
	if(n>=100000 && n<200000) {
		motTram = n/100000;
		n-=100000*motTram;
	}
	if(n>=50000 && n<100000) {
		namMuoi = n/50000;
		n-=50000*namMuoi;
	}	

// Vet can
//	while(n>0) {
//		if(n>=500000) {
//			n-=500000;
//			namTram++;
//		}
//		if(n>=200000 && n<500000) {
//			n-=200000;
//			haiTram++;
//		}
//		if(n>=100000 && n<200000) {
//			n-=100000;
//			motTram++;
//		}
//		if(n>=50000 && n<100000) {
//			n-=50000;
//			namMuoi++;
//		}
//	}
	cout<<"500.000: "<<namTram<<endl;
	cout<<"200.000: "<<haiTram<<endl;
	cout<<"100.000: "<<motTram<<endl;
	cout<<"50.000: "<<namMuoi<<endl;
	return 0;
}
