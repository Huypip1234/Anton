#include<iostream>
#include<cmath>
#include<string>
using namespace std;
typedef int item;
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
    Node *p = new Node;
    p = create_node(x);
    if(L == NULL){
        L = p;
    }else{
        p->next = L;
        L = p;
    }
}
void insert_to_last(list &L, item x){
    Node *p = new Node;
    p = create_node(x);
    if(L == NULL){
        L = p;
    }else{
        Node *temp = new Node;
        temp = L;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = p;
    }
}
void nhap(list &L, int &n){
    item x;
    do{
        cout<<"Cho n = ";cin>>n;
    }while(n<5);
    for(int i=0;i<n;i++){
        cout<<"Nhap phan tu: ";cin>>x;
        insert_to_last(L,x);
    }
}
void xuat(list &L){
    Node *p = new Node;
    p = L;
    cout<<"In danh sach:";
    while(p != NULL){
        cout<<" "<<p->data;
        p = p->next;
    }
}
void delete_last(list &L){
    list p = L;
    if(L->next == NULL){
        L = L->next;
    }else{
        while(p->next->next!= NULL){
            p = p->next;
        }
        p->next = p->next->next;
    }
}
int main(){
    list L,p;
    item x;
    int n;
    khoi_tao(L);
    nhap(L,n);
    xuat(L);
    cout<<"\nHay xoa phan tu o cuoi danh sach!\n";
    delete_last(L);
    xuat(L);
    cout<<"\nCho x = ";cin>>x;
    insert_to_head(L,x);
    cout<<"Hay them x vao dau danh sach!\n";
    xuat(L);
    cout<<"\nIn so chan trong danh sach:";
    p = L;
    while(p != NULL){
        if(p->data % 2 == 0){
            cout<<" "<<p->data;
        }
        p = p->next;
    }
    return 0;
}
