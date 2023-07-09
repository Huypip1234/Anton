#include<stdio.h>
#include<time.h>
int main() {
	
	clock_t tic = clock();
	
	//LAUUU
	//0.019000 0.020000 0.020000 0.019000 0.019000
	
	int dem = 0, i, j, k, n=100;
	for (i = 0; i < n; i++) {			// n * (i*i) * j = n* n^2 * n^2 = n^5
		for (j = 0; j < i*i; j++) {		// (i*i) * j
			if (1+1==2) {				// 1 + j = j
				for (k = 0; k < j; k++) { // j
					dem++;
				}
			}
		}
	}
	
	int dem = 0, i, j, k, n=100;
	for (i = 0; i < n; i++) {				// 
		for (j = 0; j < i*i; j++) {			// 
			if (1+1==2) {					// 
				for (k = 0; k < j; k++) { 	// 1^2 + 2^2 + 3^2 + ... + n^2 = n(2n-1)(2n - 3)/6 
					dem++;
				}
			}
		}
	}

	//NANHHH
	// 1.551000 1.552000 1.552000
	for (i = 0; i < n; i++) {
		for (j = 0; j < i*i; j++) {
			dem++;
			for (k = 0; k < j; k++) {
				dem++;
			}
		}
	}	

	clock_t toc = clock();
	
	printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
	
	
		for (i = 0; i < n; i++) { //n
			for (j = 0; j < i*i; j++) { //n^2.5
				//daysgdiuasgduiags
			}
		}	
		// n^3
	
	
		for (i = 0; i < n; i++) { //n
			for (j = 0; j < n^2; j++) { //n^2
				//daysgdiuasgduiags
			}
		}	
		//n^3
	
	return 0;
}
