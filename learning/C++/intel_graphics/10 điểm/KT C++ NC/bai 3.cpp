#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int A[], int &n)
{
	do{
		cout<<"So phan tu n = "; cin>>n;
	}while(n<=0);
	for(int i=0; i<n; i++){
		cout<<"Phan tu thu "<<i+1<<": "; cin>>A[i];
	}
}
int Max(int A[], int n)
{
	int max = A[0];
	for(int i=0; i<n; i++){
		if(A[i]>max){
			max = A[i]; 
		}
	}
	return max;
}
int chanchia3(int A[], int n)
{
	int dem=0;
	for(int i=0; i<n; i++){
		if(A[i]%2==0){
			if(A[i]%3==0){
				dem++;
			}
		}
	}
	return dem;
}
int so_chinh_phuong(int A[],int n)
{
	int Dem=0;
	for(int i=0; i<n; i++){
		if(sqrt(A[i])==floor(sqrt(A[i]))){
			Dem++;
		}
	}
	return Dem;
}
void Xuat(int A[],int n)
{
	cout<<endl;
	cout<<"In day so:";
	for(int i=0; i<n; i++){
		cout<<" "<<A[i];
	}
	cout<<endl<<endl;
	cout<<"So max = "<<Max(A,n);
	cout<<"\nDay co "<<chanchia3(A,n)<<" so chan chia het cho 3.";
	cout<<"\nDay co "<<so_chinh_phuong(A,n)<<" so chinh phuong.";
}
int main()
{
	int A[100], n;
	Nhap(A,n);
	Xuat(A,n);
	return 0;
}
