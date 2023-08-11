#include<bits/stdc++.h>
using namespace std;

// Struct
struct Node {
	int elem;
	Node *next;
};

struct LinkedList {
	Node *head;
	Node *tail;
	int size;
};
//__________________________________________________________

// Init
void initization(LinkedList *&list) {
	list->head = NULL;
	list->tail = NULL;
	list->size = 0;
}
//___________________________________________________________

// Fuction
// +) CreateNode
Node *createNode(int e) { // Return pointer because cap phat dong
	Node *newNode = new Node; // Cap phat dong
	newNode->elem=e;
	newNode->next=NULL;
	return newNode;
}
// +) pushFront:
void pushFront(LinkedList *&list, int e) {
	Node *newNode = createNode(e);
	// empty
	if(list->head == NULL) {
		list->head = newNode;
		list->tail = newNode;
		list->size = 1;
	}
	// else
	newNode->next = list->head;
	list->head = newNode;
}
// +) pushBack:
// +) DeleteFront:
// +) DeleteBack:
// +) DeleteByElement:
// +) DeleteBackByIndex:
// +) DeleteAll

//__________________________________________________________

// Input
// Print
void print(LinkedList *&list) {
	cout<<"\nPrint: ";
	Node *tmp = list->head;
	while(tmp != NULL) {
		cout<<tmp->elem<<" ";
		tmp = tmp->next;
	}
	cout<<'\n';
}

int main() {
	LinkedList *list = new LinkedList;
	initization(list);
	
	pushFront(list, 5);
	pushFront(list, 6);
	pushFront(list, 7);
	pushFront(list, 8);
	pushFront(list, 9);
	
	//print(list);
	return 0;
}
