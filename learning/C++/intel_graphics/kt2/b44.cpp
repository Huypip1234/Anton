#include<iostream>
using namespace std;

struct node{
	string msv,ten;
	int ns;
	node *next;
};
struct list{
	node *head;
	node *tail;
};

void khoitao(list &l){
	l.head = l.tail = NULL;
}

node *nutmoi(string msv,string ten,int ns){
	node *sv = new node;
	sv->msv = msv;
	sv->ten = ten;
	sv->ns = ns;
	sv->next = NULL;
	return sv;
}

void themvaodau(list &l,node *sv){
	if (l.head == NULL)
		l.head = sv;
	else{
		sv->next = l.head;
		l.head = sv;
	}
}

void themvaocuoi(list &l,node *sv){
	if (l.head == NULL)
		l.head = l.tail = sv;
	else{
		l.tail -> next = sv;
		l.tail = sv;
	}
}

void nhap(list &l,node *sv){
	khoitao(l);
	string msv,ten;
	int ns;
	while(1){
		cout << "Nhap MaSV: "; getline(cin,msv);
		if (msv == "") break;
		cout << "Nhap ten: "; getline(cin,ten);
		cout << "Nam sinh: "; cin >> ns;
		cin.ignore();
		sv = nutmoi(msv,ten,ns);
		themvaocuoi(l,sv);
	}
}
void xuat(list &l,node *sv){
	cout << "Hien thi danh sach:";
	for(sv = l.head;sv != NULL;sv = sv->next){
		cout <<endl<<sv->msv<<"\t"<<sv->ten<<"\t"<<sv->ns;
	}
}

void themsv(list &l,node *sv){
	string msv,ten;
	int ns;
	cout << "\nCho SV can them vao dau DS:\n";
	cout << "MaSV: "; getline(cin,msv);
	cout << "Ten: "; getline(cin,ten);
	cout << "Nam sinh: "; cin >> ns;
	cin.ignore();
	sv = nutmoi(msv,ten,ns); 
	themvaodau(l,sv);
	xuat(l,sv);
	cout << endl;
}

int main(){
	list l;
	node *sv;
	nhap(l,sv);
	xuat(l,sv);
	themsv(l,sv);
	return 0;
}
