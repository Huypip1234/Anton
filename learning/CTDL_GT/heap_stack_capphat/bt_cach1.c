#include<stdio.h>

struct SinhVien {
	int MaSV;
	char HoTen[50];
	char TenLop[50];
	int Diem;
};

void input(int n, struct SinhVien sv1[]) {
	int i=0;
	for(i=0; i<n; i++) {
		printf("Element %d\n", i);
		printf("MaSV: "); scanf("%d", &sv1[i].MaSV);
		getchar();
		printf("HoTen: "); fgets(sv1[i].HoTen, sizeof(sv1[i].HoTen), stdin);
		printf("TenLop: "); fgets(sv1[i].TenLop, sizeof(sv1[i].TenLop), stdin);
		printf("Diem: "); scanf("%d", &sv1[i].Diem);
	}
}

void output(int n, struct SinhVien sv1[]) {
	int i=0;
	for(i=0; i<n; i++) {
		printf("%c", '\n');
		printf("Element %d\n", i);
		printf("MaSV: %d\n", sv1[i].MaSV);
		printf("HoTen: %s", sv1[i].HoTen);
		printf("TenLop: %s", sv1[i].TenLop);
		printf("Diem: %d\n", sv1[i].Diem);
	}
}

void bubbleSortByScore(int n, struct SinhVien sv1[]) {
	struct SinhVien temp;
	int i,j;
	int swapped = 0;
    for(i = 0; i < n-1; i++) { 
        swapped = 0;
        for(j = 0; j < n-1-i; j++) {
            if(sv1[j].Diem > sv1[j+1].Diem) {
                temp = sv1[j];
                sv1[j] = sv1[j+1];
                sv1[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped==0) {break;}
    }
}

int main() {
	int n; 
	printf("n: "); scanf("%d", &n);
	struct SinhVien sv1[n];
	input(n, sv1);
	
	printf("\nIn ra:\n");
	output(n, sv1);
	
	printf("\nSorted:\n");
	bubbleSortByScore(n, sv1);
	output(n, sv1);
	return 0;
}
