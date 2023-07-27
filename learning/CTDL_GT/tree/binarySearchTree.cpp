#include <iostream>
using namespace std;

typedef int T;

// Cay nhi phan (Bai truoc)
// +) Moi nut <= 2 con

// Cay nhhi phan tim kiem
// +) (All node tren left cua node x) < x
// +) (All node tren right cua node x) > x

// Thao tac
// +) Find max, min
// +) Find x
// +) Insert, Delete

struct BinaryNode { //Moi Node co:
	T elem; // 1 phan tu
	BinaryNode *left; // Con tro toi node trai
	BinaryNode *right; // Con tro toi node phai
};
struct BinarySearchTree { //Tree co:
	BinaryNode *root; // Con tro toi nut goc
};
//____________________________________________________
// Init
void bstInit(BinarySearchTree &tree) {
	tree.root = NULL; //Ban dau rong -> root ko tro di dau
}
// Delete all
void bstMakeEmpty(BinaryNode *&t) { //Co & vi sex gan gia tri moi cho t ben trong (???)
	if (t == NULL) {return;} // Neu da rong thi thoi
	bstMakeEmpty(t->left); // Xoa cay con trai
	bstMakeEmpty(t->right); // Xoa cay con phai
	delete t; // Xóa nút goc
	t = NULL; // root = Null nhu khoi tao (tuc la ko ton tai root)
}
void bstMakeEmpty(BinarySearchTree &tree) {
	bstMakeEmpty(tree.root); //Goi ham phu
}
// Destroy
void bstDestroy(BinarySearchTree &tree) {
	bstMakeEmpty(tree); //Delete all node in tree
}
//____________________________________________________
// is Empty
bool bstIsEmpty(BinarySearchTree &tree) {
	return (tree.root == NULL);
}
// Find min (Thang duoi cung ben trai)
BinaryNode *bstFindMin(BinaryNode *t) {
	if (t == NULL) { //Cay rong 
		return NULL; 
	}
	if(t->left == NULL) { //Node trai rong
		return t;
	}
	return bstFindMin(t->left); //left vi < hon right
}
T bstFindMin(BinarySearchTree &tree) {
	BinaryNode *v = bstFindMin(tree.root); //Goi ham phu
	return v->elem; //Get min element
}
// Find max (Thang duoi cung ben phai)
BinaryNode *bstFindMax(BinaryNode *t) {
	if (t != NULL) { //Khu de quy
		while (t->right != NULL) { //right vi > hon left
			t = t->right;
		}
	}
	return t;
}
T bstFindMax(BinarySearchTree &tree) {
	BinaryNode *v = bstFindMax(tree.root); //Goi ham phu
	return v->elem; 
}
// Find x
bool bstContains(T x, BinaryNode *t) {
	if (t == NULL) { //Cay rong
		return false; 
	}
	else if (x < t->elem) { // x < gia tri dang xet -> tim ben trai
		return bstContains(x, t->left); 
	}
	else if (x > t->elem) { // x > gia tri dang xet -> tim ben phai
		return bstContains(x, t->right); 
	} 
	else { // Gap x
		return true;	
	}
}
bool bstContains(BinarySearchTree &tree, T x) {
	return bstContains(x, tree.root); 
}
// Insert x
void bstInsert(T x, BinaryNode *&t) {
	if (t == NULL) { // Cay rong -> tao node moi
		t = new BinaryNode; 
		t->elem = x; 
		t->left = NULL; 
		t->right = NULL; 
	}
	else if (x < t->elem) { // x < gia tri dang xet -> chen vao cay con trai
		bstInsert(x, t->left); 
	}
	else if (x > t->elem) { // x > gia tri dang xet -> chen vao cay con phai
		bstInsert(x, t->right);
	}
	else {}	// Cau lenh rong
}
void bstInsert(BinarySearchTree &tree, T x) {
	bstInsert(x, tree.root); //Goi ham phu
}
// Delete x
void bstRemove(T x, BinaryNode * & t) {
	if (t == NULL) return; // Cay rong -> thoat
	if (x < t->elem) { // Neu x < gtri dang xet -> xoa o cay con trai
		bstRemove(x, t->left);
	}
	else if (x > t->elem) { // Neu x > gtri dang xet -> xoa o cay con phai
		bstRemove(x, t->right);	
	}
	// Khi gap x: 
	// Delete nut 2 con: Thay nut bi xoa = nut nho nhat tren cay con phai -> xoa nut nho nhat tren cay con phai
	else if (t->left != NULL && t->right != NULL) { // Node 2 con
		t->elem = bstFindMin(t->right)->elem; // cho nut bi xoa = min tren right
		bstRemove(t->elem, t->right); // xoa min tren right
	}
	// Delete nut la: chi don gian xoa nut do
	// Delete nut chi co 1 con: Cho nut cha tro toi nut con cua nut bi xoa trc khi xoa 
	else { // Node 1 con hoac la
		BinaryNode *old = t; // Save dia chi node can xoa
		t = (t->left != NULL) ? t->left : t->right; 
		delete old; // xoa
	}
}
void bstRemove(BinarySearchTree &tree, T x) {
	bstRemove(x, tree.root); //Goi ham phu
}



int main() {
	
	return 0;
}
