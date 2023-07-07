#include<stdio.h>

struct Student {
	char name [20];
	int age;
} a, b; 
// Tuong duong: 
//struct Sach a; 
//struct Sach b;

// Long nhau:
struct Student2 {
	int n;
	struct Student Infor;
}; 

// Hoac:
typedef struct {
	int name;
	int age;
} Teacher;
// Ban chat: typedef int Int32; -> thay ten int = int32

int main() {
	// struct
	struct Student k = {"Huy", 19};
	printf("%s\n", k.name);
	
	// Long nhau:
	struct Student2 o = {999, {"Huy2", 19}};
	printf("%d\n", o.n);
	printf("%s\n", o.Infor.name);
	
	// typedef
	Teacher u = {"Eimi Fukada", 24};
	printf("%s\n", u.name);
	
	u.name = "Yui Hatano";
	printf("%s", u.name);

	return 0;
}
