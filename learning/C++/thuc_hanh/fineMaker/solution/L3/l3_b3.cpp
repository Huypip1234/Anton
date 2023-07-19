#include<bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cout<<"A = "; cin>>a;
	cout<<"B = "; cin>>b;
	cout<<"C = "; cin>>c;
	double arr[] = {a, b, c};
	sort(arr, arr+3);
	cout<<"X = "<<arr[1];
	return 0;
}
