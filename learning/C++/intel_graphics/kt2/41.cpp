#include<iostream>
using namespace std;

int n;
struct node{
	string msv,ten;
	double diem;
	node *next;
};

struct list{
	node *head;
	node *tail;
};

void khoitao(list &l){
	l.head = l.tail = NULL;
}

node *nutmoi(string msv,string ten,double diem){
	node *sv = new node;
	sv->msv = msv;
	sv->ten = ten;
	sv->diem = diem;
	sv->next = NULL;
	return sv;
}

void themvaocuoi(list &l,node *sv){
	if(l.head == NULL) 
		l.head = l.tail = sv;
	else{
		l.tail -> next = sv;
		l.tail = sv;
	}	
}

void themvaodau(list &l,node *sv){
	if(l.head == NULL)
		l.head = sv;
	else {
		sv -> next = l.head;
		l.head = sv;
	}	
}

void nhap(list &l){
	node *sv;
	khoitao(l);
	cout << "Cho so phan tu n = "; cin >> n;
	for (int i = 0;i < n;i++){
		string msv,ten;
		double diem;
		cin.ignore();
		cout << "Nhap Ma SV: "; getline(cin,msv);
		cout << "Nhap ten SV: "; getline(cin,ten);
		cout << "Diem: "; cin >> diem;
		sv = nutmoi(msv,ten,diem);
		themvaocuoi(l,sv);
	}
}

void xuat(list &l){
	cout << "In danh sach:";
	for (node *sv = l.head; sv != NULL; sv = sv -> next){
		cout << endl << sv->msv << "\t" << sv->ten << "\t" << sv->diem;
	}
}

void thembatky(list &l,node *sv){
	node *q = new node;
	q = l.head;
	if (q != NULL){
		sv -> next = q -> next;
		q -> next = sv;
		if (l.tail == q) l.tail = sv;
	}else themvaodau(l,sv);
}
void themsv(list &l){
	node *sv;
	string msv,ten;
	double diem;
	cout << "\nCho thong tin 1 SV:\n";
	cin.ignore();
	cout << "MaSV: "; getline(cin,msv);
	cout << "Ten: "; getline(cin,ten);
	cout << "Diem: "; cin >> diem;
	if (n == 0){
		sv = nutmoi(msv,ten,diem);
		themvaodau(l,sv);
	} else {
		cout << "Hay them x vao vi tri thu 2!\n";
		sv = nutmoi(msv,ten,diem);
		thembatky(l,sv); 
	}
}
int main(){
	list l;
	nhap(l);
	xuat(l);
	themsv(l);
	xuat(l);
	cout << endl;
	return 0;
}
