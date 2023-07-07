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
	SinhVien sv1;
	
	printf("NHAP\n");
	printf("MaSV: "); scanf("%d", &sv1.MaSV); 
	getchar();
	printf("TenLop: "); fgets(sv1.TenLop, sizeof(sv1.TenLop), stdin);
	sv1.TenLop[strlen(sv1.TenLop)-1] = '\0'; //remove last character 
	printf("HoTen: "); fgets(sv1.HoTen, sizeof(sv1.HoTen), stdin);
	sv1.HoTen[strlen(sv1.HoTen)-1] = '\0'; //remove last character 
	printf("Diem: "); scanf("%d", &sv1.Diem);
	printf("Ngay sinh: "); scanf("%d", &sv1.ngaysinh.Ngay);
	printf("Thang: "); scanf("%d", &sv1.ngaysinh.Thang);
	printf("Nam: "); scanf("%d", &sv1.ngaysinh.Nam);
	
	//SinhVien sv1 = { MaSV, TenLop, HoTen, Diem, {Ngay, Thang, Nam}};
	printf("%20s %20s %20s %20s %20s\n", "MaSV", "TenLop", "HoTen", "Diem", "Ngay sinh");
	
	// concat ngaysinh
	char str1[20];
	sprintf(str1, "%d", sv1.ngaysinh.Ngay);
	char str2[20];
	sprintf(str2, "%d", sv1.ngaysinh.Thang);
	char str3[20];
	sprintf(str3, "%d", sv1.ngaysinh.Nam);
	
	strcat(str1, "-");
	strcat(str1, str2);
	strcat(str1, "-");
	strcat(str1, str3);
	
	
	printf("%20d %20s %20s %20d %20s\n", sv1.MaSV, sv1.TenLop, sv1.HoTen, sv1.Diem, str1);
	return 0;
}
