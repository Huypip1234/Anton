#include <iostream>
using namespace std;

typedef int T;

// 1) Khai niem
// Nut la: nut cuoi (ko co nut con)
// Nut anh em: cung cha
// Nut ong: co con va chau

// 2) Duong di
// Duong di: tu cac nut di toi cac nut khac
// chieu dai duong di: so canh tren duong di

// 3) Chieu sau
// Chieu sau cua nut n: chieu dai duong di tu nut root den nut n
// Chieu sau cua cay: chieu sau cua nut la sau nhat

// 4) Chieu cao
// Chieu cao nut n: chieu dai duong di dai nhat tu nut n den nut la
// Chieu cao cua cay = Chieu sau cua cay

// 5) Other (vo tri)
// Neu co duong di tu n1 -> n2
// -> n1 la to tien cua n2
// -> n2 la hau due cua n1
// neu n1 != n2 -> co khai niem to tien thuc su va hau due thuc su

struct TreeNode { //Moi node trong cay chua: 
	T elem; //phan tu
	TreeNode *firstChild; //Con tro toi first node
	TreeNode *nextSibling; //Con tro toi next node
}

// Duyet cay (dung de quy)
// +) Duyet theo truoc (Duyet tu root luon)
// +) Duyet theo sau (Di xuong cuoi -> Duyet tu cuoi)


// _____________________________________________

// Cay nhi phan
// +) Moi nut <= 2 con

struct BinaryNode { // Cay nhi phan
	T elem; //phan tu
	BinaryNode *left; //Con tro toi left node
	BinaryNode *right; //Con tro toi right node
}

// _____________________________________________

// Cay bieu thuc
// +) La 1 cay nhi phan
// +) Nut trong save toan tu (+-*/)
// +) Nut la save toan hang (1 2 3 4 a b c d)



int main() {
	
	return 0;
}
