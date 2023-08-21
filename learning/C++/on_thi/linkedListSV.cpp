#include<bits/stdc++.h>
using namespace std;

struct SinhVien {
	string maSV;
	string tenSV;
	string namsinh;
};
//__________________________
struct Node {
	SinhVien elem;
	Node *next;
};
struct LinkedList {
	Node *head;
	Node *tail;
	int size;
};
//__________________________
void init(LinkedList *&list) {
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}
Node *createNewNode(SinhVien sv) {
	Node *p = new Node;
	p->elem = sv;
	p->next = NULL;
	return p;
}
void pushBack(LinkedList *&list, SinhVien sv) {
	Node *p = createNewNode(sv);
	//empty
	if(list->head == NULL) {
		list->head = p;
		list->tail = p;
		list->size++;
		return;
	}
	//else
	list->tail->next = p;
	list->tail = p;
}
void pushFront(LinkedList *&list, SinhVien sv) {
	Node *p = createNewNode(sv);
	//empty
	if(list->head == NULL) {
		list->head = p;
		list->tail = p;
		list->size++;
		return;
	}
	//else
	Node *old = list->head;
	list->head = p;
	list->head->next = old;
}
//__________________________
void input(LinkedList *&list) {
	string s;
	SinhVien sv;
	while(true) {
		cout<<"Nhap MaSV: "; getline(cin, s); sv.maSV = s;
		if(sv.maSV=="") {
			return;
		}
		cout<<"Nhap ten: "; getline(cin, s); sv.tenSV = s;
		cout<<"Nam Sinh: "; getline(cin, s); sv.namsinh = s;
		pushBack(list, sv);
	}
	
}
void output(LinkedList *&list) {
	cout<<"Hien thi danh sach:\n";
	Node *tmp = list->head;
	while(tmp!=NULL) {
		cout<<tmp->elem.maSV<<'\t'<<tmp->elem.tenSV<<'\t'<<tmp->elem.namsinh<<'\n';
		tmp = tmp->next;
	}
}

int main() {
	LinkedList *list = new LinkedList;
	init(list);
	
	input(list);
	
	output(list);
	
	cout<<"Cho SV can them vao dau DS: \n";
	string s;
	SinhVien sv;
	cout<<"Nhap MaSV: "; getline(cin, s); sv.maSV = s;
	cout<<"Nhap ten: "; getline(cin, s); sv.tenSV = s;
	cout<<"Nam Sinh: "; getline(cin, s); sv.namsinh = s;
	pushFront(list, sv);
	output(list);
	return 0;
}
