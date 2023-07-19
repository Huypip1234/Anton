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
// Delete queue
T dequeue(Queue &q) {
	T e = q.front->elem; // Save lai gia tri first Node
	Node *v = q.front; // Save lai address first node
	if (q.size == 1) { // Chi co 1 nut
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
// Enter queue
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


void printQueue(Queue &q) {
	Node *u = q.front; // dia chi thang cuoi
	for(int i=0; i<q.size; i++) {
		cout<<u -> elem;
		u = u -> next;
	}
}

// YEU CAU THUC HANH
//   2. Khai bao ham kiem tra xem mot gia tri x co trong hang doi hay khong

// VIET CODE CUA BAN O DAY
// ...

int main() {
	Queue q;
	queueInit(q);
	// Is Empty
	queueIsEmpty(q) ? cout<<"Queue is empty" : cout<<"Queue does'nt empty";
	// Push
	enqueue(q, 3);
	enqueue(q, 5);
	enqueue(q, 1);
	enqueue(q, 2);
	// Print
	printQueue(q);
	//   4. Viet code nhap vao x roi kiem tra x co trong hang doi hay khong
	//   5. Viet code rut tung phan tu ra khoi hang doi cho den khi hang doi rong
	//   6. Viet code kiem tra xem hang doi da rong hay chua
	
	queueDestroy(q);
		
	return 0;
}

// YEU CAU THUC HANH
//   1. Dinh nghia ham in tat ca cac phan tu trong hang doi len man hinh
//   2. Dinh nghia ham kiem tra xem mot gia tri x co trong hang doi hay khong
