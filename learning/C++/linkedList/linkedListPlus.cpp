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
// +) PushFront:
void pushFront(LinkedList *&list, int e) {
	Node *newNode = createNode(e);
	// empty
	if(list->head == NULL) {
		list->head = newNode;
		list->tail = newNode;
		list->size = 1;
		return;
	}
	// else
	newNode->next = list->head;
	list->head = newNode;
	list->size++;
}
// +) PushBack:
void pushBack(LinkedList *&list, int e) {
	Node *newNode = createNode(e);
	// empty
	if(list->head == NULL) {
		list->head = newNode;
		list->tail = newNode;
		list->size = 1;
		return;
	}
	// else
	newNode->next = NULL;
	list->tail->next = newNode;
	list->tail = newNode;
	list->size++;
}

// +) DeleteFront:
void deleteFront(LinkedList *&list) {
	// empty
	if(list->head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if(list->head->next == NULL) {
		Node *p = list->head;
		list->head = NULL;
		list->tail = NULL;
		delete p;
		list->size--;
		cout<<"\nDeleted front!\n";
		return;
	}
	// else
	Node *p = list->head;
	list->head = list->head->next;
	delete p;
	list->size--;
	cout<<"\nDeleted front!\n";
}
// +) DeleteBack:
void deleteBack(LinkedList *&list) {
	// empty
	if(list->head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if(list->head->next == NULL) {
		Node *p = list->head;
		list->head = NULL;
		list->tail = NULL;
		delete p;
		list->size--;
		cout<<"\nDeleted Back!\n";
		return;
	}
	// else
	Node *p = list->tail;
	Node *tmp = list->head;
	while(tmp->next!=list->tail) {tmp = tmp->next;}
	tmp->next = NULL;
	list->tail = tmp;
	delete p;
	list->size--;
	cout<<"\nDeleted Back!\n";
}

// +) DeleteByElement:
void deleteByElement(LinkedList *&list, int e) {
	// empty
	if(list->head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if(list->head->next == NULL) {
		Node *p = list->head;
		list->head = NULL;
		list->tail = NULL;
		delete p;
		list->size--;
		cout<<"\nDeleted element!\n";
		return;
	}
	Node *tmp = list->head;
	// deleteFront
	if (e == list->head->elem) {
		deleteFront(list);
		list->size--;
		cout<<"\nDeleted element!\n";
		return;
	}
	// Duyet list
	while(tmp != NULL) {
		//Found thang o truoc
		if(tmp->next->elem == e) {
			// Neu o cuoi
			if(tmp->next == list->tail) {
				deleteBack(list);
				cout<<"\nDeleted element!\n";
				return;
			} 
			Node *p = tmp->next;
			tmp->next = tmp->next->next;
			delete p;
			list->size--;
			cout<<"\nDeleted element!\n";
			return;
		}
		tmp = tmp->next;
	}
	cout<<"\nElement not Found!\n";
}
// +) DeleteByIndex:
void deleteByIndex(LinkedList *&list, int index) {
	// empty
	if(list->head == NULL) {
		cout<<"\nEmpty list!\n";
		return;
	}
	// 1 Node
	if(list->head->next == NULL) {
		Node *p = list->head;
		list->head = NULL;
		list->tail = NULL;
		delete p;
		list->size--;
		cout<<"\nDeleted element!\n";
		return;
	}
	Node *tmp = list->head;
	// deleteFront
	if (index == 0) {
		deleteFront(list);
		list->size--;
		cout<<"\nDeleted element!\n";
		return;
	}
	// Duyet list
	int count = 0;
	while(tmp != NULL) {
		//Found thang o truoc
		if(count+1==index) {
			// Neu o cuoi
			if(index==(list->size)-1) {
				deleteBack(list);
				cout<<"\nDeleted element!\n";
				return;
			} 
			Node *p = tmp->next;
			tmp->next = tmp->next->next;
			delete p;
			list->size--;
			cout<<"\nDeleted element!\n";
			return;
		}
		tmp = tmp->next;
		count++;
	}
	cout<<"\nElement not Found!\n";
}

// +) DeleteAll
void deleteAll(LinkedList *&list) {
	Node *tmp = list->head;
	while(tmp!=NULL) {
		tmp = tmp->next;
		deleteFront(list);
	}
	cout<<"Deleted all!";
}

//__________________________________________________________

// Input
void input(LinkedList *&list) {
	int n, k; cout<<"\nN = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"Element "<<i+1<<": "; 
		cin>>k;
		pushBack(list, k);
	}
}
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
	
	input(list);
	
	deleteByIndex(list, 3);
	
	print(list);
	cout<<list->tail->elem;
	return 0;
}
