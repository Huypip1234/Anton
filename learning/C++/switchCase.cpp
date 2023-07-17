#include<bits/stdc++.h>
using namespace std;

int main() {
	int x, y;
	cout<<"Nhap di may: "; cin>>x>>y;
	cout<<"Chon di may: ";
	int choose; cin>>choose;
	double rs;
	switch(choose) {
		case 1:
			rs = (x+y)/(double)(pow(x, 2) + pow(y, 2) + 1);
			cout<<rs;
			break;
		case 2:
			rs = exp(x) + 5 * y;
			cout<<rs;
			break;
		case 3:
			rs = (1 + x*x) * 1 * y;
			cout<<rs;
			break;
		default:
			cout<<"Chon 1, 2, 3 thoi may!";
			break;
	}
		
	return 0;
}
