#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cout<<"N = "; cin>>n;
	while(true) {
		if(n>0 && n<10) {
			break;
		}
		cout<<"N = "; cin>>n;
	}
	string s;
	int minn = INT_MAX;
	string minSv;
	cin.ignore();
	for(int i=1; i<=n; i++) {
		cout<<"Ho ten thu "<<i<<": "; getline(cin, s);
		if(minn>s.length()) {
			minn = s.length();
			minSv = s;
		}
	}
	cout<<"Ho ten ngan nhat (dau tien): "<<minSv;
	return 0;
}
