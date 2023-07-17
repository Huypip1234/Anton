#include <iostream>
using namespace std;

typedef int T;

struct Vector {
    int size;
    int capacity;
    T *array;
};

// Init
void vecInit(Vector &vec, int initCapacity = 16) {
    vec.size = 0;
    vec.capacity = initCapacity;
    vec.array = new T[vec.capacity]; //cap phat dong (mang)
}

// Destroy
void vecDestroy(Vector &vec) {
    delete[] vec.array; //Thu hoi vung nho
}

// Copy
void vecCopy(Vector &vec2, Vector & vec) {
    if (&vec2 != &vec) {
        vec2.size = vec.size;
        vec2.capacity = vec.capacity; 
        vec2.array = new T[vec2.capacity];
    
        for (int i = 0; i < vec2.size; i++)
            vec2.array[i] = vec.array[i]; //gan dia chi
    }
}

// Get Size
T vecGetSize(Vector &vec) {
    return vec.size;
}

// is Empty
bool vecIsEmpty(Vector &vec) {
    return (vec.size == 0);
}

// Expand (support)
void vecExpand(Vector &vec, int newCapacity) { 
    if (newCapacity <= vec.size) {
    	return;
	}
    T * old = vec.array;
    vec.array = new T[newCapacity];
    for (int i = 0; i < vec.size; i++) {
    	vec.array[i] = old[i];
	}
    delete[] old; 
    vec.capacity = newCapacity;
}

// push_back
void vecPushBack(Vector &vec, T newElement) {
    if (vec.size == vec.capacity) {
    	vecExpand(vec, 2 * vec.capacity);
	}
    vec.array[vec.size] = newElement;
    vec.size++;
}

// Insert
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

// Pop_back
void vecPopBack(Vector &vec) {
    vec.size--;
}

// Clear
void vecClear(Vector &vec) {
    vec.size = 0;
}

void vecErase(Vector &vec, int pos) {
    for (int i = pos; i < vec.size - 1; i++) {
    	vec.array[i] = vec.array[i + 1];
	}
    vec.size--;
}


// Get Capacity
T vecGetCapacity(Vector &vec) {
    return vec.capacity;
}

// print
void print(Vector &vec) {
    for (int i = 0; i < vec.size; i++) {
        cout<< vec.array[i] << " " ;
    }
}

// LinearSearch
T LinearSearch(Vector &vec, T x) {
    for (int i = 0; i < vec.size; i++) {
        if (vec.array[i] == x) return i;
    }
    return -1;
}
// bubble sort
void Sort(Vector &vec) {
    for (int i = 0; i < vec.size - 1; i++) {
        for (int j = i + 1; j < vec.size; j++) {
            if (vec.array[i] > vec.array[j]) {
                T tmp = vec.array[i];
                vec.array[i] = vec.array[j];
                vec.array[j] = tmp;
            }
        }                                       
    }
}

// Binary sort
int BinarySearch(Vector &vec, T x) {
    int left = 0, right = vec.size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (vec.array[mid] == x) return mid;
        else if (vec.array[mid] < x) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
// Erase
void Erase(Vector &vec, int pos1, int pos2) {
    while(pos1<=pos2){
    	vecErase(vec, pos1);
    	pos2--;
	}
}

// Truncate (Sai)
void truncate(Vector &vec) {  
    vec.capacity = vec.size;
}

int deleteElementsInRange(int arr[], int n, int l, int r) {
   int i, newIndex = 0;
   for (i = 0; i < n; i++) {
      // adding updating element if it is not in the given range
      if (i <= l || i >= r) {
         arr[newIndex] = arr[i];
         newIndex++;
      }
   }
   // returing the updated index
   return newIndex;
}

int main() {
	Vector vec;	
	vecInit(vec);

	vecPushBack(vec, 5); 
	vecPushBack(vec, 3); 
	vecPushBack(vec, 3);
	vecPushBack(vec, 9); 
	vecPushBack(vec, 5);
	vecPushBack(vec, 6); 
	vecPushBack(vec, 2); 
	
    // 1) Get capacity
	cout<<"1. Capacity of vector: "<<vecGetCapacity(vec) << endl;

    // 2) truncate
    truncate(vec);
    cout<<"2. truncated! capacity after cut: " << vecGetCapacity(vec) << endl;

    // 3) print all
    cout<<"3. Print all element: "; 
	print(vec);
	
    // 4) linearSearch
    cout<<"\n4. Linear Search" << endl;
    int k;
    cout<<"Element need to find: "; cin >> k;
    int index = LinearSearch(vec, k);
    if (index == -1) cout<<"Not found!" << endl;
    else cout<<"Founded at index: "<< index << endl;

    // 5) Binary search
    cout<<"5. Binary search" << endl;
    Vector vec2;
    vecCopy(vec2, vec);
    Sort(vec2);
    cout<<"New Vector after sort:" << endl;
	print(vec2);
    cout<<"\nElement need to find: "; cin >> k;
    index = BinarySearch(vec2, k);
    if(index == -1) cout<<"Not found" << endl;
    else cout<<"Founded at index: "<< index << endl;

    // 6) Erase
    cout<<"6. Erase";
    int pos1, pos2;
    cout<<"\npos 1: "; cin >> pos1;
    cout<<"pos 2: "; cin >> pos2;
    
    Erase(vec, pos1, pos2);
    cout<<"Print after erase:";
    print(vec);

	// Destroy vector
	vecDestroy(vec);
	
	return 0;
}
