#include <bits/stdc++.h>
using namespace std;

int main() {
	ofstream fo("danhsach.txt");

	int n; cout<<"N = "; cin>>n;
	string name, nganh;
	cin.ignore();
    for(int i=0; i<n; i++) {
    	cout<<"Sinh vien "<<i+1<<'\n';
    	cout<<"Name: "; getline(cin, name);
    	cout<<"Nganh: "; getline(cin, nganh);
    	fo<<name<<'\t'<<nganh<<'\n';
	}

	fo.close();

	ofstream fo2("dscntt.txt");

	string s;
	ifstream fi("danhsach.txt");
	for(int i=0; i<n; i++) {
        getline(fi, s);
        if(s.find("cntt")!=-1) {
            fo2<<s<<'\n';
        }
	}
    return 0;
}
