#include<stdio.h>

int main() {
	// Stack and Heap: Save in RAM when program execute
	// *) Stack: 
		// +) save variable, parameter,...
		// +) fixed size -> maybe tran
		// +) Auto destroy memory when done
	// *) Heap: 
		// +) save "vung nho" cho cac pointer variable dc cap phat dong
		// +) dynamic size
		// +) doesn'nt be destroy when done -> destroy by free/delete command
	
	// dynamic variable:
	// +) no name, no declare nomarl
	// +) xin khi need, destroy when used done
	// +) Dc cap phat trong heap
	// +) Query through pointer, address
	
	// How
	// 1) malloc(): (void*) malloc (size)
	int *p= (int*) malloc(10*sizeof(int));
	// 2) calloc(): (void*) calloc (total variable need to cap phat, size of each variable) <Default value is 0>
	int *p2= (int*) calloc(10, sizeof(int));
	// 3) realloc(): (void*) realloc (pointer, size): cap phat them or bot bo nho
	int *p3= (int*) realloc(p, 20*sizeof(int));
	// 4) free(): clear
	free(p); *p=NULL;
	return 0;
}
