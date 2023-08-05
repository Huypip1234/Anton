#include<bits/stdc++.h>
using namespace std;

void func(int *p) {
	cout<<*p;
}

struct sach {
	string name;
};

void func2(sach *p2) {
	cout<<p2->name;
	cout<<(*p2).name;
}

int main() {
	int n = 5;
	int *p = &n;
	//func(p);
	
	sach a = {name: "concac"};
	sach *p2 = &a;
	func2(p2);
	return 0;
}
