#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cout<<"Nhap xau S:"; getline(cin, s);
	string s2 = s;
	//trim
	while(s[0]==' ') {s.erase(0, 1);}
	while(s[s.size()-1]==' ') {s.erase(s.size()-1, 1);}
	// count
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
	count==0 ? cout<<"So tu cua S:"<<count : cout<<"So tu cua S:"<<count+1;
	// delete num
	i=0;
	while(i<s2.size()) {
		if(s2[i]>='0' && s2[i]<='9') {
			s2.erase(i, 1);
		} else {
			i++;	
		}
	}
	cout<<"\nXau S sau khi xoa:"<<s2;
	return 0;
}
