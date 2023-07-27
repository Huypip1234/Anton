#include<bits/stdc++.h>
using namespace std;

void input(int arr[], int n) {
	for(int i=0; i<n; i++) {
		cout<<"Arr["<<i<<"] = ";
		cin>>arr[i];
	}
}

void cc(int &x) {
	x++;
}

int main() {
	int n; cin>>n;
	int arr[n];
	input(arr, n);
	cout<<arr[0]<<endl<<endl;

	
	for(int i=0; i<n; i++)
		cout << " " << *(arr+i);
	return 0;
}
