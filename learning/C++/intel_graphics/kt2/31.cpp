#include<iostream>
using namespace std;

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
	p->data = k;
	p->next = NULL;
	return p;
}

void themvaodau(list &l,node *p){
	if (l.head == NULL)
		l.head = p;
	else{
		p->next = l.head;
		l.head = p;
	}
}

void themvaocuoi(list &l,node *p){
	if (l.head == NULL)
		l.head = l.tail = p;
	else{
		l.tail -> next = p;
		l.tail = p;
	}
}

void nhap(list &l,node *p){
	khoitao(l);
	while(1){
		double k;
		cout << "Nhap phan tu: "; cin >> k;
		if(k==0) break;
		p = nutmoi(k);
		themvaocuoi(l,p);
	}
}
void xuat(list &l,node *p){
	cout << "\nIn danh sach:";
	for (p = l.head;p != NULL;p = p->next){
		cout << " " << p->data;
	}
}

void themdaucuoi(list &l,node *p){
	double x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach:";
	p = nutmoi(x); themvaodau(l,p);
	p = nutmoi(x); themvaocuoi(l,p);
	xuat(l,p);
}

void dodai(list &l,node *p){
	int dem = 0;
	for (p = l.head; p != NULL; p = p->next){
		dem++;
	}
	cout << "\nDo dai cua DS = " << dem;
}
int main(){
	list l;
	node *p;
	nhap(l,p);
	xuat(l,p);
	themdaucuoi(l,p);
	dodai(l,p);
	return 0;
}
