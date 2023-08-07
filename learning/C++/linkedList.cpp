#include<bits/stdc++.h>
using namespace std;

struct Node {
	int elem;
	Node *next;
};

// Create Node
Node *createNode(int n) { // Return pointer because cap phat dong
 	Node *newNode = new Node; // Cap phat dong
 	newNode -> elem = n;
 	newNode -> next = NULL;
 	return newNode;
}

// Init (Create Null LinkedList)
void initization(Node *&head) {
	head = NULL;
}

// Push Front
void pushFront(Node *&head, Node *newNode) {
	if (head == NULL) {
		head = newNode;
 	} else {
		newNode -> next = head;
		head = newNode;
 	}
}


int main() {
	Node *head = new Node;
	initization(head);
	
	int n, k;
	cout<<"N = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Node "<<i<<": ";
		cin>>k;
		Node *newNode = createNode(k);
		pushFront(head, newNode);
	}
	
	Node *tmp = head;
	while(tmp != NULL) {
		cout<<tmp->elem<<" ";
		tmp = tmp->next;
	}
	
	return 0;
}
