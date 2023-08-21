#include<bits/stdc++.h>
using namespace std;

struct soPhuc {
	double thuc;
	double ao;
};

int main() {
	soPhuc z1;
	soPhuc z2;
	cout<<"Cho so phuc z1:\n";
	cout<<"Phan thuc: "; cin>>z1.thuc;
	cout<<"Phan ao: "; cin>>z1.ao;
	cout<<"Cho so phuc z2:\n";
	cout<<"Phan thuc: "; cin>>z2.thuc;
	cout<<"Phan ao: "; cin>>z2.ao;
	cout<<"z1 + z2 = "<<z1.thuc+z2.thuc<<" + "<<z1.ao+z2.ao<<"i\n";
	
	double one = z1.thuc*z2.thuc;
	double two = z1.thuc*z2.ao;
	double three = z1.ao*z2.thuc;
	double four = z1.ao*z2.ao*-1;
	
	double thuc = one+four;
	double ao = two+three;
	cout<<"z1 * z2 = "<<thuc<<" + "<<ao<<"i\n";
	
	return 0;
}
