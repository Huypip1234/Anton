#include <iostream>
using namespace std;

typedef int T;

struct Stack {
	T *theArray; //pointer = array
	int topOfStack;
};

// Init
void stackInit(Stack &stack, int capacity=100) {
	stack.theArray = new T[capacity];
	stack.topOfStack = -1; //emty
}
// Destroy
void stackDestroy(Stack &stack) {
	delete[] stack.theArray; // Xoa mang da duoc cap phat dong trong ham khoi tao
}
// Is empty
bool stackIsEmpty(Stack &stack) {
	return (stack.topOfStack == -1);
}

// Get Size
int stackGetSize(Stack &stack) {
	return (stack.topOfStack + 1); // +1 vi bat dau tu 0
}
// Push
void stackPush(Stack &stack, T e) {
	stack.topOfStack++;
	stack.theArray[stack.topOfStack] = e;
}
// Get top
T stackTop(Stack &stack) {
	return stack.theArray[stack.topOfStack];
}
// Pop
void stackPop(Stack &stack) {
	while(!stackIsEmpty(stack)) {
		cout<<stackTop(stack)<<" ";
		stack.topOfStack--;
	}
}
// Print
void printStack(Stack &stack) {
	cout<<"Print stack: ";
	int n = stackGetSize(stack);
	for(int i=n-1; i>=0; i--) {
		cout<<stack.theArray[i]<<" ";
	}
}
// Include
bool stackInclude(Stack &stack, T x) {
	int n = stackGetSize(stack);
	for(int i=0; i<n; i++) {
		if(stack.theArray[i]==x) {
			return true;
		}
	}
	return false;
}

int main()
{	
	Stack s;
	stackInit(s);
	// 1) is Empty
	cout<<"Stack is ";
	stackIsEmpty(s) ? cout<<"empty\n" : cout<<"not empty\n";
	
//	// 2) Push
	stackPush(s, 2);
	stackPush(s, 5);
	stackPush(s, 1);
	stackPush(s, 9);

	// 3) Print
	printStack(s);
	cout<<endl;
	
	// 4) is stack include x
	int x = 5;
	stackInclude(s, x) ? cout<<"Stack include x" : cout<<"Stack does'nt include x";
	
	// 5) pop
	cout<<"\nPop: \n";
	stackPop(s);
	// 6) is Empty
	cout<<"\nStack is ";
	stackIsEmpty(s) ? cout<<"empty\n" : cout<<"not empty\n";
	
	stackDestroy(s);
	return 0;
}
