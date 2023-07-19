#include<bits/stdc++.h>
using namespace std;

int main() {
	double vocal, tiet, hocky;
	cout<<"Diem Mieng = ";cin>>vocal;
	cout<<"Diem Mot Tiet = ";cin>>tiet;
	cout<<"Diem Hoc Ky = ";cin>>hocky;
	cout<<"Diem TB = "<<(vocal+tiet*2+hocky*3)/6;
	return 0;
}
