#include<bits/stdc++.h>
using namespace std;

int main() {
	vector<string>a;
	string k, minnStr;
	int minn = INT_MAX;
	int n, count=0;
	cout<<"N = "; cin>>n;
	cin.ignore();
	for(int i=1; i<=n; i++) {
		cout<<"Ten ngon ngu lap trinh thu "<<i<<": ";
		getline(cin, k);
		if(k.size()<=minn) {
			minn = k.size();
			minnStr = k;
		}
		a.push_back(k);
	}
	cout<<"Ngon ngu ngan nhat cuoi cung la: "<<minnStr;
	
	return 0;
}
