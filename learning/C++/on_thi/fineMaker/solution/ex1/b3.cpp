#include<bits/stdc++.h>
using namespace std;

int main() {
	string s, s2;
	cout<<"Nhap xau S:";
	getline(cin, s);
	s2=s;
	int i=0, count=0;
	
	// trim
	while(s[0]==' ') {s.erase(0,1);}
	while(s[s.size()-1]==' ') {s.erase(s.size()-1,1);}
	
	while(i<s.size()) {
		if(s[i]==' ' && s[i+1]!=' ') {
			count++;
		} 
		i++;
	}
	count==0 ? cout<<"So tu cua S: "<<count : cout<<"So tu cua S: "<<count+1;
	
	string w;
	cout<<"\nNhap xau W:"; getline(cin, w);
	int found = s2.find(w);
	if(found!=-1) {
		cout<<"Xau W xuat hien trong S tai vi tri: "<<s2.find(w);
	} else {
		cout<<"Xau W khong xuat hien trong S!";
	}
	
	return 0;
}
