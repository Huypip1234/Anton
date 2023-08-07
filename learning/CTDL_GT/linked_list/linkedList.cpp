#include<bits/stdc++.h>
using namespace std

int main() {
	//Khai niem:
	//La tap cac code lien ket theo tuyen tinh (truoc, sau)
	//Cac node nam random trong bo nho (trong khi vector, arr nam lien tuc)
	
	//1) Single linked list: 
	//+) Moi node co 2 element (value va address thang tiep theo)
	//+) First Node: Head tro den first Node cua (gom value va address)
	//+) last Node: element thu 2 tro den NULL (tu tro den Null, ko can khai bao)
	typedef int T;
	struct Node { // Khai bao Node (1 node 2 element)
		T elem; 
		Node *next; 
	};
	struct List {
		Node *head; // Khai bao con tro head
	};
	
	// Init O(1)
	void listInit(List &list) {
		list.head = NULL;
	}
	// Destroy O(n)
	void listDestroy(List &list) {
		while (!listIsEmpty(list))
		listPopFront(list); 
	} 
	bool listIsEmpty(List &list) { 
		return (list.head == NULL); //list.head: dia chi first element
	}
	// Get front element O(1)
	T listFront(List &list) {
		return list.head->elem; //gia tri first element
	}
	// Push front O(1)
	void listPushFront(List &list, T e) {
		Node *v = new Node; //Cap phat cho v (create new node)
		
		v->elem = e; // element 1 nut moi = gia tri can chen
		v->next = list.head; // Element 2 nut moi = dia chi head 
		
		list.head = v; // head tro toi first element
	}
	//Pop front O(1)
	void listPopFront(List &list) {
		Node *old = list.head; // save dia chi head (first element)
		list.head = list.head->next; //dia chi head = dia chi next (element 2 - tro toi gia tri thang sau)
		delete old; // Xoa dia chi first element
	}

	
	//2) Double linked List:
	//+) Moi node co 3 element (address prev, value, address next)
	//+) First Node: Chi co 1 element (value), head tro den dia chi value
	//+) Last Node: Chi co 1 element (value), trailer tro den dia chi value
	
	
	//3) Round linked List:
	//+) The same single linked list
	//+) First Node: Cursor tro den dia chi value
	//+) Last Node: Cursor tro den element 2, Element 2 tro den value thang First Node
	// Khai báo ki?u ph?n t?
	typedef int T;
	struct CNode {
		T elem; 
		CNode *next;
	};
	struct CList {
		CNode *cursor;
	};

	void clistInit(CList &list); // Init: Giong ben tren
	void clistDestroy(CList &list); // Destroy: Giong ben tren
	bool clistIsEmpty(CList &list); // isEmty: Giong ben tren
	T clistFront(CList &list); // get front: Giong ben tren
	// get back
	T clistBack(CList &list) {
		
	} 
	void clistMoveNext(CList &list) {
		
	}
	// Push front
	void clistInsert(CList &list, T e) {
		CNode *v = new CNode;
		v->elem = e; // Nut moi chua element moi
		if (list.cursor == NULL) { //Neu rong 
			v->next = v; // nut moi point to chinh no
			list.cursor = v; // cursor point to nut moi
		} 
		else { 
			v->next = list.cursor->next; // Nut moi point to first node
			list.cursor->next = v; // cursor point to nut moi
		}
	}
	// Pop back
	void clistRemove(CList &list) {
		CNode *old = list.cursor->next; //First node
		if (old == cursor) {
			cursor = NULL; 
		}
		else {
			cursor->next = old->next;
		}
		delete old; 
	}
	return 0;
}
