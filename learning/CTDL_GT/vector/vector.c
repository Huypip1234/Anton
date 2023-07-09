#include<stdio.h>

typedef int T;

struct Vector {
	int size;
	int capacity; //bytes 9dung luong
	T *array;
};

// initzation O(1)
void vecInit(Vector &vec, int initCapacity = 16) {
	vec.size = 0; 
	vec.capacity = initCapacity; //default = 16 bytes
	vec.array = new T[vec.capacity]; //new int array voi bo nho = 16
}

// destroy O(1)
void vecDestroy(Vector &vec) {
	delete[] vec.array; //xoa array
}
//____________________________________________________________________

// get size O(1)
int vecGetSize(Vector &vec) {
	return vec.size;
}
// check empty O(1)
bool vecIsEmpty(Vector & vec) {
	return (vec.size == 0);
}
// get element O(1)
T vecGetElem(Vector & vec, int index) {
	return vec.array[index];
}
// update
void vecSetElem(Vector & vec, int index, T newValue) {
	vec.array[index] = newValue;
}
//_________________________________________________________________________

// support
// increase size O(n)
void vecExpand(Vector &vec, int newCapacity) {
	if (newCapacity <= vec.size) {
		return;
	}
	T *old = vec.array; 
	vec.array = new T[newCapacity];	
	for (int i = 0; i < vec.size; i++) {
		vec.array[i] = old[i];
	}
	delete[] old;
	vec.capacity = newCapacity;
}

// copy O(n) 
void vecCopy(Vector &vec, Vector &vec2) {
	if (&vec != &vec2) { 
		vec.size = vec2.size;
		vec.capacity = vec2.capacity; 
		delete[] vec.array; // delete old array
		vec.array = new T[vec.capacity]; //create new array	
		for (int i = 0; i < vec.size; i++) {
			vec.array[i] = vec2.array[i]; //gan qua dia chi
		}
	}
}

// push_back O(n)
void vecPushBack(Vector &vec, T newElement) {
	if (vec.size == vec.capacity) {
		vecExpand(vec, 2 * vec.capacity);
	}
	vec.array[vec.size] =
	newElement;
	vec.size++;
}

// insert O(n)
void vecInsert(Vector &vec, int pos, T newElement) {
	if (vec.size == vec.capacity) {
		vecExpand(vec, 2 * vec.capacity);
	}
	for (int i = vec.size; i > pos; i--) {
		vec.array[i] = vec.array[i - 1];
	}
	vec.array[pos] = newElement;
	vec.size++;
}

//  Pop_back (Delete_back) O(1)
void vecPopBack(Vector &vec) {
	vec.size--;
}

// Clear all O(1)
void vecClear(Vector &vec) {
	vec.size = 0;
}

// Erase O(n)
void vecErase(Vector &vec, int pos) {
	for (int i = pos; i < vec.size - 1; i++) {
		vec.array[i] = vec.array[i + 1];
	}
	vec.size--;
}

// Truncate (delete dung luong thua)


int main() {
	struct Vector = {
		
	};
	return 0;
}
