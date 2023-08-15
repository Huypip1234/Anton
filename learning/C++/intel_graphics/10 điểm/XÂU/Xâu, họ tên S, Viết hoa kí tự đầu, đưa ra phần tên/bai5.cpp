#include <iostream>
#include <string>
using namespace std;

string chuan_hoa_ten(string s){
	for(int i = 1; i<s.size();i++)
		s[i] = tolower(s[i]);
	s = " "+s;
	for(int i = 1; i<s.size();i++)
		if(s[i-1]==' '&& s[i]!=' ')
			s[i] = toupper(s[i]);
	while(s[0]==' ')
		s.erase(0,1);
	while(s[s.size()-1]==' ')
		s.erase(s.size()-1,1);
	int i = 0;
	while(i<s.size())
		if(s[i]==' '&& s[i+1] == ' ')
			s.erase(i,1);
		else
			i++;	
	return s;
}
string tach_ten(string hoten){
    string ten;
    hoten = " " + hoten;
	int n = hoten.length();
    for(int i=n-1;i>=0;i--){
        if(hoten[i]==' '){
            for(int j=0;j<n-1-i;j++)
                ten += hoten[i+1+j];
            break;
        }
    }
    return ten;
}
int main(){
	string s;
    cout<<"Nhap Ho va ten:"; getline(cin,s);
    s = chuan_hoa_ten(s);
   	cout<<"Chuan hoa:"<<s<<endl;
   	cout<<"Ten:"<<tach_ten(s);
 	return 0;
}
