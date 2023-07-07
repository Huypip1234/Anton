#include<stdio.h>

struct Student {
	char name[20];
	int age;
};

int main() {
	// pointer struct
	struct Student *p;
	struct Student sv1 = {"Huy", 19};
	p = &sv1;
	printf("%s", p -> name); // Mui ten thay dau cham (o con tro)
	// p: address
	// *p: value
	return 0;
}
