#include<bits/stdc++.h>
using namespace std;

struct Sach {
	string ten;
	string nsx;
	int gia;
};

void input(Sach *arr, int n) {
	for(int i=0; i<n; i++) {
		cout<<"Sach"<<i+1<<": "<<'\n';
		cout<<"Gia: "; cin>>arr[i].gia; 
		cin.ignore();
		cout<<"Ten: "; getline(cin, arr[i].ten); 
		cout<<"Nsx: "; getline(cin, arr[i].nsx); 
		cout<<endl;
	}
}

void output(Sach *arr, int n) {
	for(int i=0; i<n; i++) {
		cout<<"Sach"<<i+1<<": "<<'\n';
		cout<<"Gia: "<<arr[i].gia<<'\n'; 
		cout<<"Ten: "<<arr[i].ten<<'\n';
		cout<<"Nsx: "<<arr[i].nsx<<'\n'; 
	}
}

int main() {
	int n = 3;
	Sach *arr = new Sach[n];
	
	input(arr, n);
	
	output(arr, n);
	
	delete[] arr;
	arr = NULL;
	return 0;
}
