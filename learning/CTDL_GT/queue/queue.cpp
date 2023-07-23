#include <iostream>
using namespace std;

typedef int T;

struct Node {
	T elem;      
	Node *next; 
};

// Queue
struct Queue {
	Node *front; // point to first
	Node *back;  // point to last
	int size;   
};

// Init
void queueInit(Queue &q) {
	q.front = NULL;
	q.back = NULL;
	q.size = 0;
}

// Push (Enter queue)
void enqueue(Queue &q, T e) {
	Node *v = new Node;
	
	v->elem = e;              
	v->next = NULL; // vi nut moi nam o cuoi
	
	// if empty queue
	if (q.size == 0) { 
		q.front = q.back = v;  
	}
	else {
		q.back->next = v; // Lien ket nut cuoi voi nut moi
		q.back = v; // Nut moi tro thanh nut cuoi
	}
	q.size++; // Update size
}

// Delete first element of queue
T dequeue(Queue &q) {
	T e = q.front->elem; // Save lai gia tri first Node
	Node *v = q.front; // Save lai address first node
	if (q.size == 1) { // Neu chi co 1 nut
		q.front = q.back = NULL; // Danh sach rong sau khi xoa
	}
	else {
		q.front = q.front->next; // front = nut thu 2
	}     
	delete v; // xoa nut dau
	q.size--; // Update size
	return e;
}


// Is empty
bool queueIsEmpty(Queue &q) {
	return (q.size == 0);
}

// Pop (Delete and print)
void queuePop(Queue &q) {
	while(!queueIsEmpty(q)) {
		Node *old = q.front;
		cout<<old->elem<<" ";
		q.front = q.front->next;
		delete old;
		q.size--;
	}
}

// Destroy
void queueDestroy(Queue &q) {
	while (!queueIsEmpty(q)) {
		dequeue(q);	
	}
}

// Get size
int queueGetSize(Queue &q) {
	return q.size;
}
// Print
void printQueue(Queue &q) {
	Node *u = q.front; // dia chi thang first
	for(int i=0; i<q.size; i++) {
		cout<<u->elem<<" "; // <-> (*u).elem
		u = u->next;
	}
}
// Include
bool queueInclude(Queue &q, T x) {
	Node *u = q.front; // dia chi thang first
	for(int i=0; i<q.size; i++) {
		if(u->elem==x) { // <-> (*u).elem
			return true;
		}
		u = u->next;
	}
	return 0;
}


int main() {
	Queue q;
	queueInit(q);
	// 1) Is Empty
	queueIsEmpty(q) ? cout<<"Queue is empty" : cout<<"Queue does'nt empty";
	// 2) Push
	enqueue(q, 3);
	enqueue(q, 5);
	enqueue(q, 1);
	enqueue(q, 2);
	// 3) Print
	cout<<"\nPrint: ";
	printQueue(q);
	// 4) Include
	int x = 9;
	queueInclude(q, x) ? cout<<"\nQueue include x\n" : cout<<"\nQueue does'nt include x\n";
	// 5) Pop
	cout<<"Pop: ";
	queuePop(q);	
	// 6) Is Empty
	queueIsEmpty(q) ? cout<<"\nQueue is empty" : cout<<"\nQueue does'nt empty";
	
	queueDestroy(q);
	return 0;
}
