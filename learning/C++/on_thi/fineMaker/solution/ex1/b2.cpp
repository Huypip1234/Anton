#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cout<<"Nhap xau:";
	getline(cin, s);
	if(s.length()==0) {
		cout<<"Xau rong!";
		return 0;
	}
	// trim
	while(s[0]==' ') {s.erase(0,1);}
	while(s[s.size()-1]==' ') {s.erase(s.size()-1,1);}
	// delete space lien nhau
	int i=0, count=0;
	while(i<s.size()) {
		if(i==s.size()-1) {
			break;
		}
		if(s[i]==' ' && s[i+1]==' ') {
			s.erase(i, 1);
		} else {
			i++;
		}
		if(s[i]==' ' && s[i+1]!=' ') {
			count++;
		}
	}
	cout<<"Chuan hoa:"<<s;
	count==0 ? cout<<"\nSo tu:"<<count : cout<<"\nSo tu:"<<count+1;
	return 0;
}
