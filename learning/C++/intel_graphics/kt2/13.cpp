#include<iostream>
#include<cmath>
using namespace std;

int n,a[100];
void nhap(){
	for(int i = 0;i < n;i++){
		cout << "So thu " << i + 1 << ": ";
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

void minmax(){
	int min = a[0],max = a[0];
	for (int i = 0;i < n;i++){
		if (max < a[i]) max = a[i];
		if (min > a[i]) min = a[i];
	}
	cout << "\nSo max = " << max << ", so min = " << min;
}
bool kiemtra(int n){
	if (n <= 1) return false;
	for (int i = 2;i <= sqrt(n);i++)
		if (n % i == 0) return false;
	return true;	
}

void sont(){
	int nto = 0;
	for (int i = 0;i < n;i++){
		if (kiemtra(a[i]) == true){
			nto++;
		}
	}
	cout << "\nDay co " << nto << " so nguyen to.";
}

void tbc(){
	int sum = 0;
	for (int i = 0;i < n;i++){
		sum = sum + a[i];
	}
	cout << "\nTBC day so: " << sum*1.0/n;
}
int main(){
	do{
		cout << "Nhap n = "; cin >> n;
	}while(n <= 0 || n >= 100);
	nhap();
	xuat();
	minmax();
	sont();
	tbc();
	return 0;
}
