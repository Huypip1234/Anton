#include <iostream>
using namespace std;

struct node {	
	int data;
	node *left;
	node *right;
};
//Insert
void insert_tree(node *&root, int e) { 
	if (root == NULL) { 
		root=new node;
		root->data=e;
		root->left=NULL;
		root->right=NULL;
	}
	else {
		if (e < root->data) insert_tree(root->left,e);
		else if (e > root->data) insert_tree(root->right,e);
		else return;
	}
}
//duyet theo truoc
void duyet_truoc (node *&root) {	
	if (root==NULL) return;
	else {	
		cout<<root->data<<"  ";
		duyet_truoc(root->left);
		duyet_truoc(root->right);
	};
}
//duyet theo sau
void duyet_sau (node *&root) {	
	if (root==NULL) return;
	else {	
		duyet_sau(root->left);
		duyet_sau(root->right);
		cout<<root->data<<"  ";
	};
}
//duyet theo giua
void duyet_giua (node *&root) {	
	if (root==NULL) return;
	else {	
		duyet_giua (root->left);
		cout<<root->data<<"  ";
		duyet_giua (root->right);
	}
}
//Search
node *timkiem(node *&root, int x) {
	if (root==NULL) return NULL;
	else {	
		if (root->data==x) {
			return root;
		} 
		else if (x< root->data) timkiem(root->left, x);
		else timkiem(root->right, x);
	}
}
// Get total node
int sonut(node * & root){	
	if (root==NULL) {
		return 0;
	}
	else {
		return (sonut(root->left) + sonut(root->right) +1);
	}
}	
// Get total node la
int sonutla(node * & root) {	
	if (root==NULL) {
		return 0;
	}
	else {
		if((root->left==NULL) && (root->right==NULL) )
		return 1;
		else return ( sonutla(root->left) + sonutla(root->right));
	}
	
}
		
// Delete all node
void xoacay(node *&root) {	
	if (root==NULL) return;
	else if (root->left==NULL && root->right==NULL) {	
		delete root; // xoa nut goc dang duoc tro boi bien root;
		root=NULL; // gan gia tri NULL cho bien root 
	}
	else {	
		xoacay(root->left);
		xoacay(root->right);
	}
}
// get total nut cha 2 con
int sonutchadu(node *&root) {	
	if (root==NULL || ((root->left==NULL && root->right==NULL))) return 0;
	else if (root->left!=NULL && root->right!=NULL) {
		return sonutchadu(root->left) + sonutchadu(root->right) +1;
	}
	else if (root->left==NULL && root->right!=NULL) {
		return sonutchadu(root->right);
	}
	else return sonutchadu(root->left);
}
int main() {
	// Init
	node *root; // con tro toi root
	root = NULL; // init = null (chua tro toi dau)
	
	// 1) Insert node
	insert_tree(root, 12);
	insert_tree(root, 10);
	insert_tree(root, 8);
	insert_tree(root, 6);
	insert_tree(root, 11);
	insert_tree(root, 15);
	insert_tree(root, 13);
	insert_tree(root, 17);
	
	// 2) Duyet
	cout<<"Truoc: ";
	duyet_truoc(root);
	cout<<'\n';
	cout<<"Sau: ";
	duyet_sau(root);
	cout<<'\n';
	cout<<"Giua: ";
	duyet_giua(root);
	cout<<'\n';
	
	// 3) Delete all
	xoacay(root);
	cout<<"Delete done!\n";
	
	// Insert lai
	insert_tree(root, 12);
	insert_tree(root, 10);
	insert_tree(root, 8);
	insert_tree(root, 6);
	insert_tree(root, 11);
	insert_tree(root, 15);
	insert_tree(root, 13);
	insert_tree(root, 17);
	
	// 4) Get total node
	cout<<"Total node: "<<sonut(root)<<'\n';
	
	// 5) Get total node la
	cout<<"Total node la: "<<sonutla(root)<<'\n';
	
	// 6) Get total node cha
	cout<<"Total node cha: "<<sonutchadu(root)<<'\n';
	
	// 7) Get height of tree
	
	// 8) Delete max, min node
	
	return 0;
}

