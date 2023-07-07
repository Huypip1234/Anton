#include<stdio.h>

struct Student {
	char name[20];
	int age;
};

int main() {
	// array struct
	struct Student arr[3];
	
	// input
	int i;
	for(i=0; i<3; i++) {
		printf("Element %d: \n", i);
		fgets(arr[i].name, sizeof(arr[i].name), stdin);
		arr[i].name[strlen(arr[i].name)-1] = '\0'; // Remove last character (space)
		scanf("%d", &arr[i].age);
		getchar();
	}
	
	// out put
	printf("%s", arr[0].name);
	return 0;
}
