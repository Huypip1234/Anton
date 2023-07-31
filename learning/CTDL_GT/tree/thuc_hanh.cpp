#include <iostream>
using namespace std;

// Giai thich *& de hieu vcl:
////Bien
////1) truyen kieu con tro
//void concac(int *root)
//int root
//concac(&root)
//
////2) Truyen kieu tham chieu
//void concac(int &root)
//int root
//concac(root)
////__________________________
//
////Con tro
////1) truyen kieu con tro
//void concac(int *(*root))
//int *root
//concac(&root)
//
////2) Truyen kieu tham chieu
//void concac(int &(*root))
//int *root
//concac(root)



struct node {	
	int data;
	node *left;
	node *right;
};
//Insert
void insert_tree(node *&root, int e) { //1234556 -> //&root = 999999 -> //*&root = null
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
int sonut(node *&root){	
	if (root==NULL) {
		return 0;
	}
	else {
		return (sonut(root->left) + sonut(root->right) +1);
	}
}	
// Get total node la
int sonutla(node *&root) {	
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

// Get Height
int heightOfTree(node *root) {
  int h = 0;
  if(root != NULL) {
    int lHeight = heightOfTree(root->left);
    int rHeight = heightOfTree(root->right);
    int maxHeight = max(lHeight,rHeight);
    h = maxHeight + 1;
  }
  return h;
}

// Delete Min (nut la ngoai cung ben trai)
void deleteMin(node *&root) {
	if(root->left==NULL) {
		delete root;
		root=NULL;
	}
	else deleteMin(root -> left);
}

// Delete Max (nut la ngoai cung ben phai)
void deleteMax(node *&root) {
	if(root->right==NULL) {
		delete root;
		root=NULL;
	}
	else deleteMax(root -> right);
}

int main() {
	// Init
	node *root; // con tro toi root
	root = NULL; // init = null (chua tro toi dau)
	
	// 1) Insert node
	insert_tree(root, 12); //Truyen vao con tro
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
	cout<<"Height of tree: "<<heightOfTree(root)-1<<'\n';
	// 8) Delete max, min node
	deleteMin(root);
	cout<<"After delete min: ";
	duyet_truoc(root);
	cout<<'\n';
	deleteMax(root);
	cout<<"After delete max: ";
	duyet_truoc(root);
	cout<<'\n';
	return 0;
}

