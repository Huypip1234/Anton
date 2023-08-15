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
void nhap(list &L){
    item n;
    do{
        cout<<"Nhap phan tu: ";cin>>n;
        if(n==0){
            break;
        }else{
            insert_to_last(L,n);
        }
    }while(1);
}
void xuat(list &L){
    list p = L;
    cout<<"\nIn danh sach:";
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
int main(){
    list L;
    item x;
    khoi_tao(L);
    nhap(L);
    xuat(L);
    cout<<"\nCho x = ";cin>>x;
    cout<<"Hay them x vao dau va cuoi danh sach:";
    insert_to_head(L,x);
    insert_to_last(L,x);
    xuat(L);
    cout<<"\nDo dai cua DS = "<<count(L);
    return 0;
}
