#include <iostream>
#include <string>
using namespace std;
string chuanhoa(string &s)
{
	while(s[0]==' '){
		s.erase(0,1);
	}
	while(s[s.size()-1]==' '){
		s.erase(s.size()-1,1);
	}
	int i=0;
	while(i<s.size()){
		if(s[i]==' ' && s[i+1]==' '){
			s.erase(i,1);
		}else{
			i++;
		}
	}
	s[0]=toupper(s[0]);
	for(int i=1; i<s.size(); i++){
		s[i]=tolower(s[i]);
	}
	for(int i=1; i<s.size(); i++){
		if(s[i]==' '){
			s[i+1]=toupper(s[i+1]);
		}
	}
	return s;
}
string tach_ten(string s)
{
	string ten;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]==' '){
			for(int j=i+1; j<s.size(); j++){
				ten += s[j];
			}
				break;
		}
	}
	return ten;
}
int main()
{
	string s;
	cout<<"Nhap Ho va ten:"; getline(cin,s);
	cout<<"Chuan hoa:"<<chuanhoa(s);
	cout<<"\nTen:"<<tach_ten(s);
	return 0;
}
