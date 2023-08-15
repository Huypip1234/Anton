#include<iostream>
using namespace std;

int n;
struct node{
	float data;
	node *next;
};

struct list{
	node *head;
	node *tail;
};

void khoitao(list &l){
	l.head = l.tail = NULL;
}

node *taonut(float k){
	node *p = new node;
	p->data = k;
	p->next = NULL;
	return p;
}

void themvaodau(list &l, node *p){
	if (l.head == NULL)
		l.head = p;
	else {
		p->next = l.head;
		l.head = p;
	}
}

void themvaocuoi(list &l, node *p){
	if(l.head == NULL)
		l.head = l.tail = p;
	else {
		l.tail -> next = p;
		l.tail = p;
	}
}

void nhap(list &l,node *p){
	khoitao(l);
	for (int i = 0;i < n;i++){
		float k;
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> k;
		p = taonut(k);
		themvaocuoi(l,p);
	}
}

void xuat(list &l,node *p){
	cout << "Hien thi danh sach:";
	for (p = l.head; p != NULL; p= p -> next){
		cout << " " << p->data;
	}
}

void themds(list &l,node *p){
	float x;
	cout << "\nCho x = "; cin >> x;
	cout << "Hay them x vao dau va cuoi danh sach!\n";
	p = taonut(x);
	themvaodau(l,p);
	p = taonut(x);
	themvaocuoi(l,p);
	xuat(l,p);
}

void xoadau(list &l,node *p){
	p = l.head;
	l.head = p -> next;
	delete p;
}

void xoacuoi(list &l,node *p){
	p = l.head;
	while (p -> next -> next != NULL ){
		p = p -> next;
	}
	delete p -> next;
	p -> next = NULL;
	l.tail = p;
}

void xoadaucuoi(list &l,node *p){
	cout << "\nHay xoa phan tu o dau va cuoi danh sach!";
	xoadau(l,p);
	xoacuoi(l,p);
}
int main(){
	list l;
	node *p;
	do{
		cout << "Cho n = "; cin >> n;
	}while(n < 5 || n > 10);
	nhap(l,p);
	xuat(l,p);
	themds(l,p);
	xoadaucuoi(l,p);
	cout << endl;
	xuat(l,p);
	cout << endl;
	return 0;
}
