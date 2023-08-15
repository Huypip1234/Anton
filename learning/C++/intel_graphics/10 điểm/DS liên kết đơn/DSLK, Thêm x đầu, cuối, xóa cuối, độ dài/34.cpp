#include<iostream>
#include<cmath>
#include<string>
using namespace std;
typedef float item;
struct Node{
    item data;
    Node *next;
};
typedef Node *list;
void khoi_tao(list &L){
    L = NULL;
}
Node *create_node(item x){
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
    do{
        cout<<"Cho so phan tu n = ";cin>>n;
    }while(n<=4);
    for(int i=0;i<n;i++){
        cout<<"Nhap phan tu thu "<<i+1<<": ";cin>>x;
        insert_to_last(L,x);
    }
}
void xuat(list &L){
    list p = L;
    cout<<"\nHien thi danh sach:";
    while(p != NULL){
        cout<<" "<<p->data;
        p = p->next;
    }
}
int count(list L){
    list p = L;
    int count = 0;
    while(p != NULL){
        count ++;
        p = p->next;
    }
    return count;
}
void delete_last(list &L){
    list p = L;
    while(p->next->next != NULL){
        p = p->next;
    }
    p->next = NULL;
}
int main(){
    list L;
    item x;
    int n;
    khoi_tao(L);
    nhap(L,n);
    xuat(L);
    cout<<"\nCho x = ";cin>>x;
    cout<<"Hay them x vao dau va cuoi danh sach.";
    insert_to_head(L,x);
    insert_to_last(L,x);
    xuat(L);
    cout<<"\nHay xoa o cuoi danh sach:";
    delete_last(L);
    xuat(L);
    cout<<"\nDo dai cua DS = "<<count(L);
    return 0;
}
