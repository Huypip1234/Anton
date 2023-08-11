#include<bits/stdc++.h>
using namespace std;

// Swap: To support for "Selection" and "Bubble" Sort
void swap(string &x, string &y) { 
	string tmp = x;
	x = y;
	y = tmp;
}

void swap(int &x, int &y) { 
	int tmp = x;
	x = y;
	y = tmp;
}

// Selection Sort (find min -> swap vs front)
void selectionSort(vector<string> &a) { 
	for (int i = 0; i < a.size() - 1; i++) {
		int vt = i; // de so sanh tim min (giong cho min = a[0])
		for (int j = i + 1; j < a.size(); j++) { // Find min tu i+1
			if (a[vt] > a[j]) {
				vt = j; 
			}
		}
		if (vt != i) { // push front
			swap(a[vt], a[i]); 
		}
	}
}

// BubbleSort (find max -> noi dan len tren)
void bubbleSort(vector<int> &a) {
	for (int i = 0; i < a.size()-1; i++) {
		// Noi len lan i
		for (int j = 0; j < a.size()-1-i; j++) { // Find max tu 0 -> size-i-1
			if (a[j] > a[j+1]) {
				swap(a[j], a[j+1]); // Noi len dan dan
			}
		}
	}
}

// Sap xep day xau b theo thu tu giam dan cua cac gia tri (so lan xuat hien) trong day f.
void sapXepGiam(vector<string> &b, vector<int> &f) { 
	for (int i = 0; i < b.size() - 1; i++) {
		int vt = i; 
		for (int j = i + 1; j < f.size(); j++) {
			if (f[vt] < f[j]) {
				vt = j;
			}
		}
		if (vt != i) { 
			swap(f[vt], f[i]);
			swap(b[vt], b[i]);
		}
	}
}

int main() {
    // Khai bao cac vector a (string), b (a but sorted and unique), f (so lan xuat hien)
    vector<string>a, b;
    vector<int>f;
    // Nhap so xau va cac xau tu ban phim
    int n;
    string s;
    cout<<"So xau: "; cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++) {
    	getline(cin, s);
    	a.push_back(s);
	}
    // Sap xep day xau a tang dan
    selectionSort(a);
    
    // Xay dung cac day b va f
    int count=1;
    for(int i=0; i<n; i++) {
    	if(i==n-1) {
    		b.push_back(a[i]);
    		f.push_back(count);
			break;
		}
    	if(a[i]!=a[i+1]) {
    		b.push_back(a[i]);
			f.push_back(count);
			count=1;
    		continue;
		}
		if(a[i]==a[i+1]) {
			count++;
		}
	}
	
    // Sap xep day xau b theo thu tu giam dan cua cac gia tri trong day f
	sapXepGiam(b, f);
	
    // In ket qua len man hinh
	for(int i=0; i<b.size(); i++) {
    	cout<<b[i]<<" "<<f[i]<<'\n';
	}
    return 0;
}

