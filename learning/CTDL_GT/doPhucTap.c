#include<stdio.h>
int main() {
	//Rules:
	// 1) const drop: O(c.f(n)) -> O(f(n))
	// 2) just max: O(f(n)+g(n)) -> O(max(f(n), g(n))
	// 3) sumary: O(f(n)), O(g(n)) -> O(f(n)+g(n)) (2 for tach nhau)
	// 4) tich: for long
	
	// ex1: O(n)
	max = a
	for i = 1 to n-1
		if (ai > max) {
			max = ai
		}
	//ex2: O(n^3)
	sum = 0;
	for (i = 0; i < n; i++)
	for (j = 0; j < n*n; j++)
		sum++;
	//ex3: O(n+(n+1)/2)
	sum = 0;
	for (i = 0; i < n; i++) // n
	for (j = 0; j < i; j++) // (n+1)/2 <ma tran tg duoi>
		sum++;
	
	
	return 0;
}
