#include<bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin>>a>>b>>c;
	if(a<0 || b<0 || c<0) {cout<<"is not Tam Giac"; return 0;}
	
	if(a==b && b==c) {
		cout<<"Tam giac deu";
		return 0;
	}
	
	(a+b>c && b+c>a && a+c>b) ? cout<<"is Tam Giac" : cout<<"is not Tam Giac";
	return 0;
}
