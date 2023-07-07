#include<stdio.h>

struct Day {
	int Ngay;
	int Thang;
	int Nam;
};

typedef struct {
	int MaSV;
	char TenLop [30];
	char HoTen [30];
	int Diem;
	struct Day ngaysinh;
	
} SinhVien;

int main() {	
	// array struct
	SinhVien sv1[50];
	
	/// input
	int i, n;
	printf("NHAP n:");
	scanf("%d", &n);
	
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
	
	
	// output
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
	return 0;
}
