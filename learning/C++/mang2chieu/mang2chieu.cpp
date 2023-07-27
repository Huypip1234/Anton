#include<bits/stdc++.h>
using namespace std;

void input(vector<vector<int> > &a) {
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			cin>>a[i][j];
		}
	}
}
void outputA(vector<vector<int> > &a) {
	cout<<"Cac gtri >5 dong i=3: ";
	for(int j=0; j<4; j++) {
		if(a[3][j]>5) {
			cout<<a[3][j]<<" ";
		}
	}
}

void outputB(vector<vector<int> > &a) {
	cout<<"Cac gtri >5 dong i=3: ";
	for(int j=0; j<4; j++) {
		if(a[3][j]>5) {
			cout<<a[3][j]<<" ";
		}
	}
}
	

int main() {
	// Phai cap phat dung luong moi cin dc
	vector< vector<int> > a(4, vector<int> (4)); //(Dung luong hang, vector cot)
	input(a);
	outputA(a);
	return 0;
}
