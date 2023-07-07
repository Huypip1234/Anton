#include<stdio.h>

struct Student {
	char name[20];
	int age;
};

void showNormal (struct Student sv1) {
	printf("%s\n", sv1.name);
} 

//void ShowByAddressParam(struct Student &sv1) {
//	printf("%s\n", sv1.name);
//}

void ShowByPointerParam(struct Student *sv1) {
	printf("%d", (*sv1).age);
}

int main() {
	struct Student sv1 = {"Huy", 19};
	// Param Normal
	showNormal(sv1);
	
	// /Param is Address
//	ShowByPassAddress(sv1);

	// Param is Pointer
	ShowByPointerParam(&sv1);
	return 0;
}
