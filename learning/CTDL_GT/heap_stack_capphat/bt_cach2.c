#include<stdio.h>

struct SinhVien {
	int MaSV; //4 bytes
	char HoTen[50]; //50 bytes
	char TenLop[50]; //50 bytes
	int Diem; //4 bytes
};

void input(int n, struct SinhVien *sv1[]) {
	int i=0;
	for(i=0; i<n; i++) {
		printf("Element %d\n", i);
		printf("MaSV: "); scanf("%d", &((*sv1)[i].MaSV));
		getchar();
		printf("HoTen: "); fgets((*sv1)[i].HoTen, sizeof((*sv1)[i].HoTen), stdin);
		printf("TenLop: "); fgets((*sv1)[i].TenLop, sizeof((*sv1)[i].TenLop), stdin);
		printf("Diem: "); scanf("%d", &((*sv1)[i].Diem));
	}
}

void output(int n, struct SinhVien *sv1[]) {
	int i=0;
	for(i=0; i<n; i++) {
		printf("%c", '\n');
		printf("Element %d\n", i);
		printf("MaSV: %d\n", (*sv1)[i].MaSV);
		printf("HoTen: %s", (*sv1)[i].HoTen);
		printf("TenLop: %s", (*sv1)[i].TenLop);
		printf("Diem: %d\n", (*sv1)[i].Diem);
	}
}

void bubbleSortByScore(int n, struct SinhVien *sv1[]) {
	struct SinhVien temp;
	int i,j;
	int swapped = 0;
    for(i = 0; i < n-1; i++) { 
        swapped = 0;
        for(j = 0; j < n-1-i; j++) {
            if((*sv1)[j].Diem > (*sv1)[j+1].Diem) {
                temp = (*sv1)[j];
                (*sv1)[j] = (*sv1)[j+1];
                (*sv1)[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped==0) {break;}
    }
}

void findByMaSV(int n, struct SinhVien *sv1[], int MaSV) {
	int i, found=0;
	for(i=0; i<n; i++) {
		if((*sv1)[i].MaSV == MaSV) {
			printf("SV co ten la: %s", (*sv1)[i].HoTen);
			found=1;
			break;
		}
	}
	if(found==0) {printf("MaSV not found!");}
	
}

int main() {
	int n; 
	printf("n: "); scanf("%d", &n);
	
	// dynamic cap phat
	// SinhVien: 108 bytes
	struct SinhVien *sv1 = (struct SinhVien*) malloc(10*sizeof(struct SinhVien));
	// Tao ra vung nho SinhVien 10*108 bytes
	// Tro toi dia chi dau tien cua SinhVien
	
	input(n, &sv1);
	
	printf("\nIn ra:\n");
	output(n, &sv1);
	
	printf("\nSorted:\n");
	bubbleSortByScore(n, &sv1);
	output(n, &sv1);
	
	int MaSV;
	printf("\nNhap MaSV can tim: "); scanf("%d", &MaSV);
	
	findByMaSV(n, &sv1, MaSV);
	free(sv1);
	
	return 0;
}
