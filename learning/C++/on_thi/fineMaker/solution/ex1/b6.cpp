#include<bits/stdc++.h>
using namespace std;

bool isaz(char c) {
	if (c>='a' && c<='z') {
		return true;
	}
	return false;
}

bool isazupper(char c) {
	if (c>='A' && c<='Z') {
		return true;
	}
	return false;
}

bool isnumber(char c) {
	if (c>='0' && c<='9') {
		return true;
	}
	return false;
}

int main() {
	string s;
	cout<<"Nhap xau S:"; getline(cin, s);
	//trim
	while(s[0]==' ') {s.erase(0, 1);}
	while(s[s.size()-1]==' ') {s.erase(s.size()-1, 1);}
	// count and delete special cheracter
	int i=0;
	while(i<s.size()) {
		if(isaz(s[i])==false && isazupper(s[i])==false && isnumber(s[i])==false && s[i]!=' ') {
			s.erase(i, 1);
		} else {
			i++;
		}
	}
	cout<<"Xau S sau khi xoa:"<<s;
	
	// count tu
	int count=0;
	i=0;
	while(i<s.size()) {
		if(i==s.size()-1) {
			break;
		}
		if(s[i]==' ' && s[i+1]!=' ') {
			count++;
		}
		i++;
	}
	count==0 ? cout<<"\nSo tu cua S:"<<count : cout<<"\nSo tu cua S:"<<count+1;
	return 0;
}
