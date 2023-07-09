#include<stdio.h>
int main() {
	// const -> log(n) -> log^2(n) -> n(tuyen tinh) -> nlog(n) -> n^2 -> n^3 -> 2^n
	// gan, cong, tru, nhan, chia,... = 1
	
	// time toi nhat: khi ko break dc or if...
	
	//ex1:
	for (i = 0; i < n; i++) {
		// 2 thao tac
		for (j = 0; j < n; j++) {
			// 3 thao tac
		}
	}
	// ben trong vong trong: 3
	// -> vong trong: 3n
	// ben trong vong ngoai: 2 + 3n
	// -> vong ngoai: n * (2+3n)
	// -> t(n) = n * (2+3n) = 2n + 3n^2 = O(n^2)
	
	//ex2: De quy
	long factorial(int n) {
 		if (n <= 1) return 1;
 		else return n * factorial(n - 1);
 	}
	// trong factorial: 1 + 2 = 3
	// factorial: n * 3 = 3n (de quy n lan, moi lan 3 thao tac)
	// -> t(n) = 3n = O(n)
	
	//ex3: Binary search
	int binarySearch(a, n, x) {
		left = 0, right = n – 1;
		while (left <= right) {
			mid = (left + right) / 2;
			if (x < a[mid]) {right = mid – 1;}
			else if (x > a[mid]) {left = mid + 1;}
			else {return mid;}
		}
		return –1;
	}
	// -> O(log(n))
	// Deo biet :))
	
	//ex4: vong trong: i->j -> (n+1)/2
	
	//ex5:
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
	

return 0;
}
