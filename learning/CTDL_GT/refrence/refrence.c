#include<stdio.h>

void change(int n) {
    n = n + 1;
}

void change2(int *n) {
    *n += 1;
}
 

int main() {
	int a = 10; //address: 62fe1c
	change(a); // Truyen tham tri (call by value)
	printf("Tham tri: %d \n", a);
	change2(&a); // Truyen tham chieu (Call by refrence) (Thong qua con tro)
	printf("Tham chieu: %d", a);
	// because the same address so n change, a change too
	// 2 variable have other name but have the same address
	return 0;
}
