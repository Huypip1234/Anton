#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Sinhvien{
    string masv;
    string hoten;
    float diem;
};
typedef Sinhvien item;
struct Node{
    item data;
    Node *next;
};
typedef Node *list;
void khoi_tao(list &L){
    L = NULL;
}
list create_node(item x){
    Node *node = new Node;
    node->data = x;
    node->next = NULL;
    return node;
}
void insert_to_head(list &L, item x){
    list p = create_node(x);
    if(L == NULL){
        L = p;
    }else{
        p->next = L;
        L = p;
    }
}
void insert_to_last(list &L, item x){
    list p = create_node(x);
    if(L == NULL){
        L = p;
    }else{
        list temp = L;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}
void insert_to_second(list &L, item x){
    list p = create_node(x);
    if(L == NULL){
        L = p;
    }else{
        p->next = L->next;
        L->next = p;
    }
}
void nhap(list &L, int &n){
    item x;
    cout<<"Cho so phan tu n = ";cin>>n;
    for(int i=0;i<n;i++){
        cin.ignore();
        cout<<"Nhap Ma SV: ";getline(cin,x.masv);
        cout<<"Nhap ten SV: ";getline(cin,x.hoten);
        cout<<"Diem: ";cin>>x.diem;
        insert_to_last(L,x);
    }
}
void xuat(list &L){
    list p = L;
    cout<<"In danh sach:";
    while(p != NULL){
        cout<<endl<<p->data.masv<<"\t"<<p->data.hoten<<"\t"<<p->data.diem;
        p = p->next;
    }
}
int main(){
    list L;
    int n;
    item x;
    khoi_tao(L);
    nhap(L,n);
    xuat(L);
    cout<<"\nCho thong tin 1 SV:";
    cin.ignore();
    cout<<"\nMaSV: ";getline(cin,x.masv);
    cout<<"Ten: ";getline(cin,x.hoten);
    cout<<"Diem: ";cin>>x.diem;
    if(n>0){
    	cout<<"Hay them x vao vi tri thu 2!\n";
	}
    insert_to_second(L,x);
    xuat(L);
    return 0;
}
