#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;

void nhap(int a[], int &n)
{
	cout<<"So phan tu n = "; cin>>n;
	for(int i=0;i<n;i++) 
		{
    		cout<<"Phan tu thu "<<i+1<<": ";
			cin>>a[i];
  		}
}
void xuat(int a[], int n)
{
	cout<<"\nIn day so:";
	for(int i=0;i<n;i++)
		cout<<" "<<a[i];
	cout<<endl;
}
void InNguoc(int a[], int n)
{
    cout<<"\nIn nguoc day so:";
	for(int i = 0; i < n; i++)
    	cout<<" "<<a[n-1-i];
}
void TimSo(int a[], int n)
{
	int cp = 0, chan = 0; 
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 ==0) chan++;
		if(sqrt(a[i])==floor(sqrt(a[i])))	cp++;
	}
	cout<<"\nDay co "<<chan<<" so chan!";
	cout<<"\nDay co "<<cp<<" so chinh phuong!";
}
int main() {
	int n, A[100];
	nhap(A,n); 
	xuat(A,n);
	InNguoc(A,n);
	TimSo(A,n);
  	return 0;
}

