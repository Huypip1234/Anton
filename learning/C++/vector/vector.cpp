#include<iostream>
#include<vector>
using namespace std;

void input(int n, vector<int> &a) {
	int k;
	cout<<"Vector: ";
	for(int i=0; i<n; i++) {
		cin>>k;
		a.push_back(k);
	}
}

void input(int n, vector<double> &a) {
	double k;
	cout<<"Vector: ";
	for(int i=0; i<n; i++) {
		cin>>k;
		a.push_back(k);
	}
}

void middleWare(int n, vector<int> &a,  vector<int> &b) {
	for(int i=0; i<a.size(); i++) {
		if(a[i]%2==0) {b.push_back(a[i]);}
	}
}

void middleWare(int n, vector<double> &a,  vector<double> &c) {
	for(int i=a.size()-1; i>=0; i--) {
		c.push_back(a[i]);
	}
}

void middleWare(vector<int> &a, int k) {
	a.erase(a.begin()+k);
}

void output(int n, vector<int> &b) {
	for(int i=0; i<b.size(); i++) {
		cout<<b[i]<<" ";
	}
}

void output(int n, vector<double> &c) {
	for(int i=0; i<c.size(); i++) {
		cout<<c[i]<<" ";
	}
}

int main() {
	int n, k; cout<<"N = "; cin>>n;
	// 1)
//	vector<int>a;
//	input(n, a);
//	vector<int>b;
//	middleWare(n, a, b);
//	cout<<"Print vector b: ";
//	output(n, b);
//	cout<<endl<<"_________________________"<<endl;
//	
//	// 2)
//	vector<double>a2;
//	input(n, a2);
//	vector<double>c;
//	middleWare(n, a2, c);
//	cout<<"Print vector c: ";
//	output(n, c);
//	cout<<endl<<"_________________________"<<endl;
//	
//	// 3) 
//	vector<int>a3;
//	input(n, a3);
//	cout<<"k = "; cin>>k;
//	middleWare(a3, k);
//	cout<<"Print vector after erase: ";
//	output(n, a3);
	
	// 4) insert
	vector<int>d;
	input(n, d);
	int x;
	cout<<"x = "; cin>>x;
	cout<<"k = "; cin>>k;
	d.insert(d.begin()+k, x);
	output(n, d);
	return 0;
}
