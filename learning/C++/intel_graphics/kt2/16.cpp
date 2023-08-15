#include<iostream>
#include<string>
using namespace std;

string s;
void nhap(){
	cout << "Nhap ho va ten:\n";
	getline(cin,s);
}

void xuat(){
	cout << s;
}

void xoaSpaceDauCuoi(){
	while (s[0] == ' '){
		s.erase(s.begin() + 0); //xoa ki tu tai vi tri 0
	}
	while (s[s.size() - 1] == ' '){
		s.erase(s.begin() + s.size() - 1); // xoa tai vi tri cuoi
	}
}

void xoaSpaceGiuaCacTu(){
	for (int i = 0;i < s.size();i++){
		while(s[i] == ' ' && s[i + 1] == ' '){
			s.erase(s.begin() + i);
			i--;
		}
	}
}

void chuanhoa(){
	cout << "Chuan hoa:\n";
	for (int i = 0;i < s.size();i++){
		s[i] = tolower(s[i]); // chuyen het ve chu thuong
	}
	s[0] = toupper(s[0]);
	for (int i = 0; i < s.size();i++){
		if (s[i] == ' ' && s[i + 1] != ' '){
			s[i + 1] = toupper (s[i + 1]);
		}
	}
	xuat();
}

void dem(){
	int dem = 0;
	for (int i = 0; i < s.size();i++){
		if (s[i] == ' ' && s[i + 1] != ' '){
			dem++;
		}
	}
	if (s =" ") cout << "\nSo tu: " << dem;
	else cout << "\nSo tu: " << dem + 1;
}
int main(){
	nhap();
	xoaSpaceDauCuoi();
	xoaSpaceGiuaCacTu();
	chuanhoa();
	dem();
	return 0;
}
