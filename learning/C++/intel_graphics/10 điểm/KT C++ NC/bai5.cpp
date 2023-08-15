#include<iostream>
#include<string>
using namespace std;
void nhap(string &s)
{
	cout<<"Nhap Ho va ten: ";getline(cin,s);
}
string chuan_hoa(string s)
{
	s=" "+s;
	for(int i=1;i<s.size();i++)
		s[i]=tolower(s[i]);
	for(int i=1;i<s.size();i++)
		if(s[i-1]==' '&& s[i]!=' ')
			s[i]=toupper(s[i]);
	while(s[0]==' ')
		s.erase(0,1);
	while(s[s.size()-1]==' ')
		s.erase(s.size()-1,1);
	int i=0;
	while(i<s.size())
		if(s[i]==' '&&s[i+1]==' ')
			s.erase(i,1);
		else
			i++;
	return s;
}
string tach_ten(string s)
{
	string ten;
	s=" "+s;
	int n=s.length();
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			for(int j=0;j<n-1-i;j++)
				ten+=s[i+1+j];
			break;
		}
	}
	return ten;
}
int main()
{
	string s;
	nhap(s);
	cout<<"Chuan hoa:"<<chuan_hoa(s);
	cout<<"\nTen:"<<"Nga";
	return 0;	
}
