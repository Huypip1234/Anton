#include<iostream>
#include<cmath>
#include<string>
using namespace std;
struct Sinhvien{
    int SBD;
    string hoten;
    float namsinh;
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
void nhap(list &L, int &n){
    item x;
    cout<<"Cho n = ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Nhap SBD: ";cin>>x.SBD;
        cin.ignore();
        cout<<"Nhap ten: ";getline(cin,x.hoten);
        cout<<"Diem: ";cin>>x.namsinh;
        insert_to_last(L,x);
    }
}
void xuat(list &L){
    list p = L;
    cout<<"Hien thi danh sach:";
    while(p != NULL){
        cout<<endl<<p->data.SBD<<"\t"<<p->data.hoten<<"\t"<<p->data.namsinh;
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
    cout<<"\nCho SV can them vao cuoi DS:";
    cout<<"\nSBD: ";cin>>x.SBD;
    cin.ignore();
    cout<<"Ten: ";getline(cin,x.hoten);
    cout<<"Diem: ";cin>>x.namsinh;
    insert_to_last(L,x);
    xuat(L);
    return 0;
}
