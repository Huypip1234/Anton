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
bool nguyen_to(item x){
    if(x <=1){
        return false;
    }else{
        for(item i=2;i<=sqrt(x);i++){
            if(x % i == 0){
                return false;
            }
        }
    }
    return true;
}
void nhap(list &L, int &n){
    do{
        cout<<"Cho n = ";cin>>n;
    }while(n<10 || n>100);
    for(item i=1;i<=n;i++){
        if(nguyen_to(i)){
            insert_to_head(L,i);
        }
    }
}
void xuat(list &L){
    list p = L;
    cout<<"Hien thi lai danh sach:";
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
    if(nguyen_to(x)){
        cout<<"x la so nguyen to. Hay them x vao dau danh sach.";
        insert_to_head(L,x);
    }else{
        cout<<"x khong phai la so nguyen to!";
    }
    cout<<endl;
    xuat(L);
    return 0;
}
