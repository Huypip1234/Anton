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
    do{
        cout<<"Cho n = ";cin>>n;
    }while(n<20);
    for(item i=1;i<=n;i++){
        if(i % 2 == 0){
            insert_to_last(L,i);
        }
    }
}
void xuat(list &L){
    list p = L;
    cout<<"Hien thi danh sach:";
    while(p != NULL){
        cout<<" "<<p->data;
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
    cout<<"\nCho so nguyen x = ";cin>>x;
    if(x % 2 == 0){
        cout<<"Them x vao dau danh sach!";
        insert_to_head(L,x);
    }else{
        cout<<"Them x vao cuoi danh sach!";
        insert_to_last(L,x);
    }
    cout<<endl;
    xuat(L);
    return 0;
}
