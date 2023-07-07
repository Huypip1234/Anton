#include<stdio.h>

int main() {
	// 1) Vung nho: (SAVE IN RAM)
	// Moi o nho = 1 byte (1byte = 8bit)
	// Cac o nho dc danh dau tu 0 -> so tuong duong vs so o nho of divice (coi nhu the nhung ko phai the)
	
	// When declare 1 variable:
	// Ex: int a = 5
	// +) First: program will find vi tri co 4 bytes trong -> assign cho  bien "a" quan li (Cap phat)
	// +) Second: provice for variable an address la vi tri o nho dau tien trong 4 o nho 
	// -> de compiler bt dc vi tri cua bien do de truy xuat, thay doi
	
	
	// 2) Pointer:
	// Point to other variable
	// value: address of other variable
	int number = 10; //Address: 6487572
	int* p = &number; // & is refrence operator
	// p: 6487572 (address of number) <-> &number
	// *p: 10 (value of number)
	// &p: 6487568 (address of p)

	printf("%d\n", p);
	// Address default is Thap phan
	// In order to convert to hexa: Thay %d = %x
	
	// !!!Bonus:
	// pointer type void: Nhan address every variable, every type
	// int *p = NULL -> value = 0
	
	// ______________________________________________
	// 1) Change variable value by pointer
	*p = 20;
	printf("%d\n", number); // value: 20
	// 2) operator
	p+=1; // address
	printf("%d", p); // 6487576 -> increase address 4 byte (bang voi type dc khai bao)
	return 0;
}
