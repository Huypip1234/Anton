#include<iostream>
#include<cmath>
using namespace std;

int n,a[20];
void nhap(){
	do{
		cout << "So phan tu n = "; cin >> n;
	}while(n <= 0 || n >= 20);
	for (int i = 0;i < n;i++){
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void xuat(){
	cout << "\nIn day so:";
	for (int i = 0;i < n;i++){
		cout << " " << a[i];
	}
	cout << endl;
}

void max(){
	int max = a[0];
	for (int i = 0;i < n;i++){
		if (max < a[i]) max = a[i];
	}
	cout << "\nSo max = " << max;
}

void cp(){
	int cpmax = a[0];
	for (int i = 0; i < n;i++){
		int p = sqrt(a[i]);
		if (p*p == a[i] && cpmax < a[i]){
			cpmax = a[i];
		}
	}
	cout << "\nSo chinh phuong lon nhat: " << cpmax;
}
int main(){
	nhap();
	xuat();
	max();
	cp();
	return 0;
}
