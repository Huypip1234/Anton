#include<iostream>
using namespace std;

int n;
struct node{
	double data;
	node *next;
};

struct list{
	node *head;
	node *tail;
};

void khoitao(list &l){
	l.head = l.tail = NULL;
}

node *nutmoi(double k){
	node *p = new node;
	p -> data = k;
	p -> next = NULL;
	return p;
}

void themvaocuoi(list &l,node *p){
	if (l.head == NULL)
		l.head = l.tail = p;
	else {
		l.tail -> next = p;
		l.tail = p;
	}
}

void themvaodau(list &l, node *p){
	if (l.head == NULL) 
		l.head = p;
	else{
		p -> next = l.head;
		l.head = p;
	}
}

void nhap(list &l){
	node *p;
	khoitao(l);
	for (int i = 0;i < n;i++){
		double k;
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> k;
		p = nutmoi(k);
		themvaocuoi(l,p);
	}
}

void xuat(list &l){
	cout << "\nHien thi danh sach:";
	for (node *p = l.head;p != NULL;p = p -> next){
		cout << " " << p -> data;
	}
}

void themds(list &l){
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach.";
	node *p = nutmoi(x); 
	themvaodau(l,p);
	p = nutmoi(x); 
	themvaocuoi(l,p);
	xuat(l);
}

void xoacuoi(list &l){
	cout << "\nHay xoa o cuoi danh sach:";
	node *p = l.head;
	while (p -> next -> next != NULL){
		p = p -> next;
	}
	delete (p -> next);
	p -> next = NULL;
	l.tail = p;
}
void dem(list &l){
	int dem = 0;
	for (node *p = l.head; p != NULL;p = p->next){
		dem++;
	}
	cout << "\nDo dai cua DS = " << dem;
}
int main(){
	list l;
	do{
		cout << "Cho so phan tu n = "; cin >> n;
	}while(n <= 4);
	nhap(l);
	xuat(l);
	themds(l);
	xoacuoi(l);
	xuat(l);
	dem(l);
	return 0;
}
