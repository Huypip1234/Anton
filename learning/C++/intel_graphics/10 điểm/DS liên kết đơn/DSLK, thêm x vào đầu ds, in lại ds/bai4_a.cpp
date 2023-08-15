#include <iostream>
#include<string>

using namespace std;

struct SinhVien{
		string maSV;
		string HoTen;
		float Diem;
	};
typedef SinhVien item;

struct Node{ 
	item data; 		
	Node *next; 	
};
typedef Node *List;
List CreateNode(item x){
	Node *node = new Node;
	node->data = x;
	node->next = NULL;
	return node;
}
List InsertToHead(List L, item x){
	Node *p = new Node;
	p->data = x;
	p->next = L;
	L = p;
	return L;
}
List InsertToLast(List L, item x){
    List temp, p;
    temp = CreateNode(x);
    if(L == NULL)  L = temp;     
    else{
        p = L;
        while(p->next != NULL) p = p->next;
        p->next = temp; 
    	}   
	return L;
}
List InsertToMiddle(List L, Node *Q, item x){
	Node *p = new Node;		
	p->data = x;
	p->next = Q->next;
	Q->next = p;
	return L;
}
void Input(List &L, int &n){
	item x;
	cout<<"cho so phan tu n = ";cin>>n;
	for(int i =0; i<n;i++){
		cin.ignore();
		cout<<"Nhap Ma SV: "; getline(cin,x.maSV); 
		cout<<"Nhap ten SV: "; getline(cin,x.HoTen); 
		cout<<"Diem: ";cin>>x.Diem;
		L= InsertToLast(L,x);
	}
}
void Output(List L){
	Node *p=L;
	cout<<"Hien thi danh sach:\n";
	while(p!= NULL){
			cout<<p->data.maSV<<"\t"<<p->data.HoTen<<"\t"<<p->data.Diem<<endl;
			p=p->next;
		}
}
int main(){		
	List L = NULL;
	int n;
	Input(L,n);
	Output(L);
	item x;
	cout<<"Cho SV can them vao dau DS:\n";
	cin.ignore();
	cout<<"MaSV: ";getline(cin,x.maSV); 
	cout<<"Ten: ";getline(cin,x.HoTen); 
	cout<<"Diem: ";cin>>x.Diem;
	L = InsertToHead(L,x);
	Output(L);
	return 0;
}

