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
	if(s.size()==0) {
		cout<<"Xau rong!";
		return 0;
	}
	string s2 = s;
	//trim
	while(s[0]==' ') {s.erase(0, 1);}
	while(s[s.size()-1]==' ') {s.erase(s.size()-1, 1);}
	// count tu
	int count=0;
	int i=0;
	while(i<s.size()) {
		if(i==s.size()-1) {
			break;
		}
		if(s[i]==' ' && s[i+1]!=' ') {
			count++;
		}
		i++;
	}
	count==0 ? cout<<"So tu cua S: "<<count : cout<<"So tu cua S: "<<count+1;
	
	// count and delete special cheracter
	int count2=0;
	i=0;
	while(i<s2.size()) {
		if(isaz(s2[i])==false && isazupper(s2[i])==false && isnumber(s2[i])==false) {
			count2++;
			s2.erase(i, 1);
		} else {
			i++;
		}
	}
	cout<<"\nSo ky tu khong la chu cai/chu so: "<<count2;
	cout<<"\nXau S sau khi xoa:"<<s2;
	return 0;
}
