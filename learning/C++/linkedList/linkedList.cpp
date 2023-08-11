#include<bits/stdc++.h>
using namespace std;

struct Node {
	int elem;
	Node *next;
};

// Init (Create Null LinkedList)
void initization(Node *&head, Node *&tail) {
	head = NULL;
	tail = NULL;
}

// __________________________________________________________________________________________


// Create Node
Node *createNode(int n) { // Return pointer because cap phat dong
 	Node *newNode = new Node; // Cap phat dong
 	newNode -> elem = n;
 	newNode -> next = NULL;
 	return newNode;
}

// Push Front
void pushFront(Node *&head, Node *&tail, Node *newNode) {
	if (head == NULL) {
		head = newNode;
		tail = newNode;
 	} else {
		newNode -> next = head;
		head = newNode;
 	}
}

// Push back
void pushBack(Node *&head, Node *&tail, Node *newNode) {
	if (head == NULL) {
		head = newNode;
		tail = newNode;
 	} else {
		tail -> next = newNode;
		tail = newNode;
 	}
}

// Delete front
void deleteFront(Node *&head, Node *&tail) {
	// empty
	if(head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if (head->next == NULL) {
		Node *p = head;
		head = NULL;
		tail = NULL;
		delete p;
		cout<<"\nDeleted front!\n";
		return;
	}
	// else
	Node *p = head;
	head = head->next;
	delete p;
	cout<<"\nDeleted front!\n";
}

// Delete back
void deleteBack(Node *&head, Node *&tail) {
	// empty
	if(head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if (head->next == NULL) {
		Node *p = head;
		head = NULL;
		tail = NULL;
		delete p;
		cout<<"\nDeleted front!\n";
		return;
	}
	// else
	Node *p = tail;
	Node *tmp = head;
	while(tmp->next != tail) {tmp = tmp->next;}
	tmp->next = NULL;
	tail=tmp;
	delete p;
	cout<<"\nDeleted back!\n";
}

// Delete by elemt
void deleteByElem(Node *&head, Node *&tail, int e) {
	// empty
	if(head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if (head->next == NULL) {
		Node *p = head;
		head = NULL;
		tail = NULL;
		delete p;
		cout<<"\nDeleted front!\n";
		return;
	}
	// deleteFront
	if (e == head->elem) {
		deleteFront(head, tail);
		cout<<"\nDeleted element!\n";
		return;
	}
	// deleteBack
	if (e == tail->elem) {
		deleteBack(head, tail);
		cout<<"\nDeleted element!\n";
		return;
	}
	// else: 1 2 3 [4] 5
	Node *tmp = head;
	while(tmp->next->elem != e) {tmp = tmp->next;}
	Node *p = tmp->next; 
	tmp->next = tmp->next->next;
	delete p;
	cout<<"\nDeleted element!\n";
}

// ___________________________________________________________

// input
void input(Node *&head, Node *&tail) {
	int n, k;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Node "<<i+1<<": ";
		cin>>k;
		Node *newNode = createNode(k);
		pushBack(head, tail, newNode);
	}
}

// Print
void print(Node *&head) {
	Node *tmp = head;
	while(tmp != NULL) {
		cout<<tmp->elem<<" ";
		tmp = tmp->next;
	}
}

// _____________________________________________________________________________

bool isNto(int n) {
	if(n<2) {
		return false;
	}
	for (int i=2; i <= sqrt(n); i++) {
		if(n%i==0) {
			return false;
		}
	}
	return true;
}

void printNt(Node *&head) {
	cout<<"\nNto: ";
	Node *tmp = head;
	while(tmp!=NULL) {
		if(isNto(tmp->elem)) {
			cout<<tmp->elem<<" ";
		}
		tmp = tmp->next;
	}
	cout<<'\n';
}

int main() {
	Node *head = new Node;
	Node *tail = new Node;
	
	initization(head, tail);
	
	input(head, tail);
	
	print(head);
	
//	printNt(head);
	
	deleteByIndex(head, tail, 0);
	print(head);
	cout<<'\n'<<head->elem;
	cout<<'\n'<<tail->elem;
	
	return 0;
}
