#include <iostream>
#include <string>
using namespace std;
struct SinhVien{
	string ten;
	string msv;
	int namsinh;
	SinhVien *tro;
};
struct LinkList{
	SinhVien *head;
	SinhVien *tail;
};
SinhVien* createNode(string ht, string msv, int namsinh){
	SinhVien *sv = new SinhVien;
	sv->ten = ht;
	sv->msv = msv;
	sv->namsinh = namsinh;
	sv->tro = NULL;
	return sv;
}
void createList(LinkList &l){
	l.head = NULL;
	l.tail = NULL;
}
void insertTail(LinkList &l, SinhVien *sv){
	if(l.head == NULL){
		l.head = sv;
		l.tail = sv;
	}
	else{
		l.tail->tro = sv;
		l.tail = sv;
	}
}
void InPut(LinkList &l){
	createList(l);
		string ht, msv;
		int namsinh;
		cin.ignore();
		cout << "Nhap MaSV: "; getline(cin,msv);
		cin.ignore();
		cout << "\nNhap ten: "; getline(cin,ht);
		cout << "\nNam sinh: "; cin >> namsinh;
		SinhVien *sv = createNode(ht, msv, namsinh);
		insertTail(l, sv);
}
void OutPut(LinkList l){
	cout <<"Hien thi danh sach: \n";
	for(SinhVien *sv = l.head; sv != NULL; sv = sv->tro){
		cout << sv->msv << "   " << sv->ht << "   " << sv->namsinh << endl; 
	}
	cout << endl;
}
//void themsv(LinkList l){
//	cout << "MaSV: "; getline(cin,msv);

int main(){
	LinkList l;
	createList(l);
	InPut(l);
	OutPut(l);
	return 0;
}	
		
