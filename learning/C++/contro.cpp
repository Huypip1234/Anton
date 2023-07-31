#include<bits/stdc++.h>
using namespace std;

int main() {
	int *p = new int[20];
	for(int i=0; i<10; i++) {
		cout<<"p["<<i+1<<"] = ";
		cin>>p[i];
	}
	sort(p, p+10);
	cout<<"Min: "<<p[0]<<endl;
	cout<<"Max: "<<p[9]<<'\n';
	cout<<"Sorted: ";
	int dem=1, maxx=INT_MIN, val;
	for(int i=0; i<10; i++) {
		if(i==9) {
			cout<<p[i]<<" ";
			break;
		}
		cout<<p[i]<<" ";
		if(p[i]==p[i+1]) {
			dem++;
			if(dem>maxx) {
				maxx=dem;
				val = p[i];
			}
		} else {
			dem=1;
		}
		
	}
	cout<<"\nTan suat: "<<val;
	// 1 2 2 2 3 4 5 5 6
	// 
	return 0;
}
