#include<stdio.h>

typedef struct {
	int Ngay;
	int Thang;
	int Nam;
} Day;

typedef struct {
	int MaSV;
	char TenLop[50];
	char HoTen[50];
	int Diem;
	Day ngaysinh;
} SinhVien;

void input(int n, SinhVien sv1[]) {
	int i;
	for(i=0; i<n; i++) {
		printf("Element %d: \n", i);
		printf("MaSV: "); scanf("%d", &sv1[i].MaSV); 
		getchar();
		printf("TenLop: "); fgets(sv1[i].TenLop, sizeof(sv1[i].TenLop), stdin);
		sv1[i].TenLop[strlen(sv1[i].TenLop)-1] = '\0'; //remove last character 
		printf("HoTen: "); fgets(sv1[i].HoTen, sizeof(sv1[i].HoTen), stdin);
		sv1[i].HoTen[strlen(sv1[i].HoTen)-1] = '\0'; //remove last character 
		printf("Diem: "); scanf("%d", &sv1[i].Diem);
		printf("Ngay sinh: "); scanf("%d", &sv1[i].ngaysinh.Ngay);
		printf("Thang: "); scanf("%d", &sv1[i].ngaysinh.Thang);
		printf("Nam: "); scanf("%d", &sv1[i].ngaysinh.Nam);
	}
}

void output(int n, SinhVien sv1[]) {
	int i=0;
	printf("%20s %20s %20s %20s %20s\n", "MaSV", "TenLop", "HoTen", "Diem", "Ngay sinh");
	
	for(i=0; i<n; i++) {
		// concat ngaysinh
		char str1[20];
		sprintf(str1, "%d", sv1[i].ngaysinh.Ngay);
		char str2[20];
		sprintf(str2, "%d", sv1[i].ngaysinh.Thang);
		char str3[20];
		sprintf(str3, "%d", sv1[i].ngaysinh.Nam);
	
		strcat(str1, "-");
		strcat(str1, str2);
		strcat(str1, "-");
		strcat(str1, str3);
	
		printf("%20d %20s %20s %20d %20s\n", sv1[i].MaSV, sv1[i].TenLop, sv1[i].HoTen, sv1[i].Diem, str1);
	}
}

void count(int n, SinhVien sv1[], float x) {
	int i, count=0;
	for(i=0; i<n; i++) {
		if(sv1[i].Diem >= x) {count++;}
	}
	printf("So sv co diem tb >= x: %d", count);
}

int main() {
	int n, i; 
	printf("n: "); scanf("%d", &n);
	
	SinhVien sv1[n];
	
	input(n, sv1);
	
	output(n, sv1);
	
	float x;
	printf("x: "); scanf("%f", &x);
	count(n, sv1, x);
	return 0;
}
