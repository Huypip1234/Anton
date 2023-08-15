#include<iostream>
#include<cmath>
using namespace std;

int a[100],n;
void nhap(){
	for (int i = 0;i < n;i++){
		cout << "Phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
	cout << endl;
}
void xuat(){
	for(int i = 0; i < n;i++){
		cout << a[i] << " ";	
	}		
}
//Tim so chinh phuong lon nhat.Neu ko co in ra "Day ko co so cp"
void cp(){
	int max = a[0],dem = 0;
	for (int i = 0;i < n;i++){
		int p = sqrt(a[i]);
		if (p*p == a[i] && a[i] > max){
			max = a[i];
			cout << "\nSo chinh phuong lon nhat la: " << max;
		}
	}		
}		
int main(){
	do{
		cout << "So phan tu n = "; cin >> n;
	}while(n <= 0);
	nhap();
	cout << "In day so: ";
	xuat();
	cout << endl;
	cp();
	return 0;
}	
