#include<iostream>
#include<cmath>
using namespace std;

int n,a[100];
void nhap(){
	for (int i = 0;i < n;i++){
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << endl;
}

void xuat(){
	cout << "In day so:";
	for (int i = 0; i < n;i++){
		cout << " " << a[i];
	}
	cout << endl;
}

void cp(){
	int max = a[0], dem = 0;
	for (int i = 0;i < n;i++){
		int p = sqrt(a[i]);
		if (p * p == a[i]){
			dem++;
			if (max < a[i]) max = a[i];
		}
	}
	if (dem == 0) cout << "\nDay khong co so chinh phuong!";
	else cout << "\nSo chinh phuong lon nhat la: " << max;
}
int main(){
	do{
		cout << "So phan tu n = "; cin >> n;
	}while(n <= 0);
	nhap();
	xuat();
	cp();
	return 0;
}
