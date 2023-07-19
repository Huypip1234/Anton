#include <iostream>
using namespace std;

int main() {
	int a[] = {1, 2, 3, 4};
	int *p = a;
	cout<<p[0]<<endl;
	cout<<a<<endl;
	cout<<&a[0]<<endl;
	
	return 0;
}
