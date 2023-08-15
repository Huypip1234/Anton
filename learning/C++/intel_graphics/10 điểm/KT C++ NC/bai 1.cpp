#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int A[], int &n)
{
	do{
	cout<<"Nhap so phan tu cua day, n = "; cin>>n;
	}while(n<=0);
	for(int i=0; i<n; i++){
		cin.ignore();
		cout<<"So thu "<<i+1<<": "; cin>>A[i];
	}
}
int Max(int A[],int n)
{
	int max = A[0];
	for(int i=1; i<n; i++){
		if(A[i]>max){
			max = A[i];
		}
	}
	return max;
}
int Min(int A[],int n)
{
	int min = A[0];
	for(int i=0; i<n; i++){
		if(A[i]<min){
			min = A[i];
		}
	}
	return min;
}
bool so_ngto(int a)
{
	if(a<=1){
		return false;
	}else{
		for(int i=2; i<=sqrt(a); i++){
			if(a%i==0){
				return false;
			}
		}
	}
	return true;
}
int so_ngto(int A[],int n)
{
	int Dem=0;
	for(int i=0; i<n; i++){
		if(so_ngto(A[i])){
			Dem++;
		}
	}
	return Dem;
}
int chia5(int A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++){
		if(A[i]%5==0){
			dem++;
		}
	}
	return dem;
}
double TBC(int A[], int n)
{
	double sum=0;
	for(int i=0; i<n; i++){
		sum += A[i];
	}
	return double(sum/n);
}
void Xuat(int A[], int n)
{
	cout<<"\nIn day so:";
	for(int i=0; i<n; i++){
		cout<<" "<<A[i];
	}
	cout<<endl;
	cout<<"\nMax = "<<Max(A,n)<<", Min = "<<Min(A,n);
	cout<<"\nDay co "<<chia5(A,n)<<" so chia het cho 5.";
	cout<<"\nDay co "<<so_ngto(A,n)<<" so nguyent to.";
	cout<<"\nTrung binh cong cac so TBC = "<<TBC(A,n);
}
int main()
{
	int A[100], n;
	Nhap(A,n);
	Xuat(A,n);
	return 0;
}
